// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_ConnectedShape_HeaderFile
#define _AIS_ConnectedShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AIS_ConnectedShape_HeaderFile
#include <Handle_AIS_ConnectedShape.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _AIS_ConnectedInteractive_HeaderFile
#include <AIS_ConnectedInteractive.hxx>
#endif
#ifndef _PrsMgr_TypeOfPresentation3d_HeaderFile
#include <PrsMgr_TypeOfPresentation3d.hxx>
#endif
#ifndef _Handle_AIS_Shape_HeaderFile
#include <Handle_AIS_Shape.hxx>
#endif
#ifndef _AIS_KindOfInteractive_HeaderFile
#include <AIS_KindOfInteractive.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_AIS_InteractiveObject_HeaderFile
#include <Handle_AIS_InteractiveObject.hxx>
#endif
#ifndef _Handle_Prs3d_Projector_HeaderFile
#include <Handle_Prs3d_Projector.hxx>
#endif
#ifndef _Handle_Prs3d_Presentation_HeaderFile
#include <Handle_Prs3d_Presentation.hxx>
#endif
#ifndef _Handle_Geom_Transformation_HeaderFile
#include <Handle_Geom_Transformation.hxx>
#endif
#ifndef _Handle_SelectMgr_Selection_HeaderFile
#include <Handle_SelectMgr_Selection.hxx>
#endif
class Standard_NotImplemented;
class AIS_Shape;
class AIS_InteractiveObject;
class TopLoc_Location;
class Prs3d_Projector;
class Prs3d_Presentation;
class Geom_Transformation;
class SelectMgr_Selection;
class TopoDS_Shape;


//! Constructs a Connected Interactive Object with an <br>
//! AIS_Shape presentation as its reference Interactive Object. <br>
//! In topological decomposition of the shape, this class <br>
//! assigns the same owners to the sensitive primitives <br>
//! as those in AIS_Shape. Like AIS_Shape, it allows a <br>
//! presentation of hidden parts. These are calculated <br>
//! automatically from the shape of its reference entity. <br>
class AIS_ConnectedShape : public AIS_ConnectedInteractive {

public:

  //! Initializes the type of 3d presentation aTypeOfPresentation <br>
  Standard_EXPORT   AIS_ConnectedShape(const PrsMgr_TypeOfPresentation3d aTypeOfPresentation = PrsMgr_TOP_ProjectorDependant);
  //! Initializes the entity aInteractiveShape and the type of 3d presentation aTypeOfPresentation. <br>
  Standard_EXPORT   AIS_ConnectedShape(const Handle(AIS_Shape)& aInteractiveShape,const PrsMgr_TypeOfPresentation3d aTypeOfPresentation = PrsMgr_TOP_ProjectorDependant);
  //! Initializes the entity aConnectedShape and the type of 3d presentation aTypeOfPresentation. <br>
  Standard_EXPORT   AIS_ConnectedShape(const Handle(AIS_ConnectedShape)& aConnectedShape,const PrsMgr_TypeOfPresentation3d aTypeOfPresentation = PrsMgr_TOP_ProjectorDependant);
  
  Standard_EXPORT   virtual  AIS_KindOfInteractive Type() const;
  
  Standard_EXPORT   virtual  Standard_Integer Signature() const;
  
  Standard_EXPORT   virtual  Standard_Boolean AcceptShapeDecomposition() const;
  //!  Establishes the connection between the Connected <br>
//! Interactive Object, anotherIobj, and its reference <br>
//! entity. If there is already a previous connection with <br>
//! an Interactive Object, this connection is removed. <br>
  Standard_EXPORT   virtual  void Connect(const Handle(AIS_InteractiveObject)& anotherIObj) ;
  //! Establishes the connection between the Connected <br>
//! Interactive Object, anotherIobj, and its reference <br>
//! entity. If there is already a previous connection with <br>
//! an Interactive Object, this connection is removed. <br>
//! This syntax also initiates the location of the Connected Interactive Object. <br>
  Standard_EXPORT   virtual  void Connect(const Handle(AIS_InteractiveObject)& anotherIobj,const TopLoc_Location& aLocation) ;
  //! Returns the topological shape which is the reference <br>
//! for the connected shape. Sets hilight mode to index <br>
//! 0. This returns a wireframe presentation. <br>
  Standard_EXPORT    const TopoDS_Shape& Shape() ;




  DEFINE_STANDARD_RTTI(AIS_ConnectedShape)

protected:




private: 

  
  Standard_EXPORT   virtual  void Compute(const Handle(Prs3d_Projector)& aProjector,const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT   virtual  void Compute(const Handle(Prs3d_Projector)& aProjector,const Handle(Geom_Transformation)& aTrsf,const Handle(Prs3d_Presentation)& aPresentation) ;
  //! Generates sensitive entities by copying <br>
//! them from myReferense selection specified by aMode, <br>
//! creates and sets an entity owner for this entities and adds <br>
//! them to aSelection. <br>
  Standard_EXPORT   virtual  void ComputeSelection(const Handle(SelectMgr_Selection)& aSelection,const Standard_Integer aMode) ;
  
  Standard_EXPORT     void UpdateShape(const Standard_Boolean WithLocation = Standard_True) ;
  
  Standard_EXPORT     void Compute(const Handle(Prs3d_Projector)& aProjector,const Handle(Prs3d_Presentation)& aPresentation,const TopoDS_Shape& aShape) ;

TopoDS_Shape myOwnSh;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
