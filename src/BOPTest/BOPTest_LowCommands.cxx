// Created on: 2001-03-28
// Created by: Peter KURNEV
// Copyright (c) 2001-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and / or modify it
// under the terms of the GNU Lesser General Public version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#include <BOPTest.ixx>

#include <stdio.h>

#include <gp_Pnt2d.hxx>
#include <gp_Pnt.hxx>

#include <TopoDS.hxx>
#include <TopoDS_Shape.hxx>
#include <TopAbs_State.hxx>

#include <TCollection_AsciiString.hxx>

#include <BRepClass3d_SolidClassifier.hxx>
#include <BRepClass_FaceClassifier.hxx>

#include <BRep_Tool.hxx>
#include <BRep_CurveRepresentation.hxx>
#include <BRep_ListIteratorOfListOfCurveRepresentation.hxx>
#include <BRep_TEdge.hxx>
#include <BRep_GCurve.hxx>

#include <Draw.hxx>
#include <DBRep.hxx>
#include <DrawTrSurf.hxx>

#include <BOPTools_AlgoTools2D.hxx>

static
  void PrintState (Draw_Interpretor& aDI,
                   const TopAbs_State& aState);
static
  Handle(Geom2d_Curve) CurveOnSurface(const TopoDS_Edge& E, 
                                      const TopoDS_Face& F,
                                      Standard_Real& First,
                                      Standard_Real& Last);
static
  Handle(Geom2d_Curve) CurveOnSurface(const TopoDS_Edge& E, 
                                      const Handle(Geom_Surface)& S,
                                      const TopLoc_Location& L,
                                      Standard_Real& First,
                                      Standard_Real& Last);

static  Standard_Integer bclassify   (Draw_Interpretor& , Standard_Integer , const char** );
static  Standard_Integer b2dclassify (Draw_Interpretor& , Standard_Integer , const char** );
static  Standard_Integer bhaspc      (Draw_Interpretor& , Standard_Integer , const char** );

//=======================================================================
//function : LowCommands
//purpose  : 
//=======================================================================
  void  BOPTest::LowCommands(Draw_Interpretor& theCommands)
{
  static Standard_Boolean done = Standard_False;
  if (done) return;
  done = Standard_True;
  // Chapter's name
  const char* g = "CCR commands";
  theCommands.Add("bclassify"    , "Use >bclassify Solid Point [Tolerance=1.e-7]",
                  __FILE__, bclassify   , g);
  theCommands.Add("b2dclassify"  , "Use >bclassify Face Point2d [Tol2D=Tol(Face)] ",
                  __FILE__, b2dclassify , g);
  theCommands.Add("bhaspc"       , "Use >bhaspc Edge Face [do]",
                  __FILE__, bhaspc      , g);
}

//=======================================================================
//function : bclassify
//purpose  : 
//=======================================================================
Standard_Integer bclassify (Draw_Interpretor& theDI,
                            Standard_Integer  theArgNb,
                            const char**      theArgVec)
{
  if (theArgNb < 3)
  {
    theDI << " Use >bclassify Solid Point [Tolerance=1.e-7]\n";
    return 1;
  }

  TopoDS_Shape aS = DBRep::Get (theArgVec[1]);
  if (aS.IsNull())
  {
    theDI << " Null Shape is not allowed here\n";
    return 1;
  }
  else if (aS.ShapeType() != TopAbs_SOLID)
  {
    theDI << " Shape type must be SOLID\n";
    return 1;
  }

  gp_Pnt aP (8., 9., 10.);
  DrawTrSurf::GetPoint (theArgVec[2], aP);
  const Standard_Real aTol = (theArgNb == 4) ? Draw::Atof (theArgVec[3]) : 1.e-7; //Precision::Confusion();

  BRepClass3d_SolidClassifier aSC (aS);
  aSC.Perform (aP,aTol);

  PrintState (theDI, aSC.State());
  return 0;
}
//
//=======================================================================
//function : b2dclassify
//purpose  : 
//=======================================================================
Standard_Integer b2dclassify (Draw_Interpretor& theDI,
                              Standard_Integer  theArgNb,
                              const char**      theArgVec)
{
  if (theArgNb < 3)
  {
    theDI << " Use >bclassify Face Point2d [Tol2D=Tol(Face)]\n";
    return 1;
  }

  TopoDS_Shape aS = DBRep::Get (theArgVec[1]);
  if (aS.IsNull())
  {
    theDI << " Null Shape is not allowed here\n";
    return 1;
  }
  else if (aS.ShapeType() != TopAbs_FACE)
  {
    theDI << " Shape type must be FACE\n";
    return 1;
  }

  gp_Pnt2d aP (8., 9.);
  DrawTrSurf::GetPoint2d (theArgVec[2], aP);
  const TopoDS_Face&  aF   = TopoDS::Face(aS);
  const Standard_Real aTol = (theArgNb == 4) ? Draw::Atof (theArgVec[3]) : BRep_Tool::Tolerance (aF);

  BRepClass_FaceClassifier aClassifier;
  aClassifier.Perform(aF, aP, aTol);

  PrintState (theDI, aClassifier.State());
  return 0;
}

//=======================================================================
//function : bhaspc
//purpose  : 
//=======================================================================
Standard_Integer bhaspc (Draw_Interpretor& di, Standard_Integer n, const char** a)
{
  if (n<3) {
    di << " Use bhaspc> Edge Face [do]\n";
    return 1;
  }

  TopoDS_Shape S1 = DBRep::Get(a[1]);
  TopoDS_Shape S2 = DBRep::Get(a[2]);
  
  if (S1.IsNull() || S2.IsNull()) {
    di << " Null shapes are not allowed \n";
    return 1;
  }
  if (S1.ShapeType()!=TopAbs_EDGE || S2.ShapeType()!=TopAbs_FACE) {
    di << " Type mismatch\n";
    return 1;
  }
  //
  const TopoDS_Edge& aE=TopoDS::Edge(S1);
  const TopoDS_Face& aF=TopoDS::Face(S2);
  Standard_Real f2D, l2D; 

  Handle(Geom2d_Curve) C2D=CurveOnSurface(aE, aF, f2D, l2D);
  
  if (C2D.IsNull()) {
    di << " No 2D Curves detected\n";
  }
  else {
    di << " Ok Edge has P-Curve on this Face\n";
  }
  
  if (n==4) {
    if (!strcmp(a[3], "do")) {
      BOPTools_AlgoTools2D::BuildPCurveForEdgeOnFace(aE, aF);  
    }
  }

  return 0;
}

//=======================================================================
//function : PrintState
//purpose  :
//=======================================================================
void PrintState (Draw_Interpretor&   theDI,
                 const TopAbs_State& theState)
{
  switch (theState)
  {
    case TopAbs_IN:       theDI << "The point is IN shape\n";      return;
    case TopAbs_OUT:      theDI << "The point is OUT of shape\n";  return;
    case TopAbs_ON:       theDI << "The point is ON shape\n";      return;
    case TopAbs_UNKNOWN:
    default:              theDI << "The point is UNKNOWN shape\n"; return;
  }
}

//=======================================================================
//function : CurveOnSurface
//purpose  : 
//=======================================================================
Handle(Geom2d_Curve) CurveOnSurface(const TopoDS_Edge& E, 
                                    const TopoDS_Face& F,
                                    Standard_Real& First,
                                    Standard_Real& Last)
{
  TopLoc_Location l;
  const Handle(Geom_Surface)& S = BRep_Tool::Surface(F,l);
  TopoDS_Edge aLocalEdge = E;
  if (F.Orientation() == TopAbs_REVERSED) {
    aLocalEdge.Reverse();
  }
  return CurveOnSurface(aLocalEdge,S,l,First,Last);
}

static Handle(Geom2d_Curve) nullPCurve;
//=======================================================================
//function : CurveOnSurface
//purpose  : 
//=======================================================================
Handle(Geom2d_Curve) CurveOnSurface(const TopoDS_Edge& E, 
                                    const Handle(Geom_Surface)& S,
                                    const TopLoc_Location& L,
                                    Standard_Real& First,
                                    Standard_Real& Last)
{
  TopLoc_Location l = L.Predivided(E.Location());
  Standard_Boolean Eisreversed = (E.Orientation() == TopAbs_REVERSED);

  // find the representation
  BRep_ListIteratorOfListOfCurveRepresentation itcr
    ((*((Handle(BRep_TEdge)*)&E.TShape()))->ChangeCurves());

  while (itcr.More()) {
    const Handle(BRep_CurveRepresentation)& cr = itcr.Value();
    if (cr->IsCurveOnSurface(S,l)) {
      const Handle(BRep_GCurve)& GC = *((Handle(BRep_GCurve)*)&cr);
      GC->Range(First,Last);
      if (GC->IsCurveOnClosedSurface() && Eisreversed)
        return GC->PCurve2();
      else
        return GC->PCurve();
    }
    itcr.Next();
  }
  return nullPCurve;
}
