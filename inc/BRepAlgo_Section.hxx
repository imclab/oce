// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepAlgo_Section_HeaderFile
#define _BRepAlgo_Section_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _BRepAlgo_BooleanOperation_HeaderFile
#include <BRepAlgo_BooleanOperation.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
class TopoDS_Shape;
class gp_Pln;
class Geom_Surface;


//! Construction of the section lines between two shapes. <br>
//! For this Boolean operation, each face of the first <br>
//! shape is intersected by each face of the second <br>
//! shape. The resulting intersection edges are brought <br>
//! together into a compound object, but not chained or <br>
//! grouped into wires. <br>
//! Computation of the intersection of two Shapes or Surfaces <br>
//! The two parts involved in this Boolean operation may <br>
//! be defined from geometric surfaces: the most common <br>
//! use is the computation of the planar section of a shape. <br>
//! A Section object provides the framework for: <br>
//! - defining the shapes to be intersected, and the <br>
//!   computation options, <br>
//! - implementing the construction algorithm, and <br>
//! - consulting the result. <br>
//! Example : giving two shapes S1,S2 accessing faces, <br>
//! let compute the section edges R on S1,S2, <br>
//! performing approximation on new curves, <br>
//! performing PCurve on part 1 but not on part 2 : <br>
//! Standard_Boolean PerformNow = Standard_False; <br>
//! BRepBoolAPI_Section S(S1,S2,PerformNow); <br>
//! S.ComputePCurveOn1(Standard_True); <br>
//! S.Approximation(Standard_True); <br>
//! S.Build(); <br>
//! TopoDS_Shape R = S.Shape(); <br>
//! On Null Shapes of geometries, NotDone() is called. <br>
class BRepAlgo_Section  : public BRepAlgo_BooleanOperation {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   BRepAlgo_Section(const TopoDS_Shape& Sh1,const TopoDS_Shape& Sh2,const Standard_Boolean PerformNow = Standard_True);
  
  Standard_EXPORT   BRepAlgo_Section(const TopoDS_Shape& Sh,const gp_Pln& Pl,const Standard_Boolean PerformNow = Standard_True);
  
  Standard_EXPORT   BRepAlgo_Section(const TopoDS_Shape& Sh,const Handle(Geom_Surface)& Sf,const Standard_Boolean PerformNow = Standard_True);
  
  Standard_EXPORT   BRepAlgo_Section(const Handle(Geom_Surface)& Sf,const TopoDS_Shape& Sh,const Standard_Boolean PerformNow = Standard_True);
  //! This and the above algorithms construct a framework for computing the section lines of <br>
//! - the two shapes Sh1 and Sh2, or <br>
//! - the shape Sh and the plane Pl, or <br>
//! - the shape Sh and the surface Sf, or <br>
//! - the surface Sf and the shape Sh, or <br>
//! - the two surfaces Sf1 and Sf2, <br>
//!   and builds the result if PerformNow equals true, its <br>
//! default value. If PerformNow equals false, the <br>
//! intersection will be computed later by the function Build. <br>
//! The constructed shape will be returned by the <br>
//! function Shape. This is a compound object <br>
//! composed of edges. These intersection edges may be built: <br>
//! - on new intersection lines, or <br>
//! - on coincident portions of edges in the two intersected shapes. <br>
//!   These intersection edges are independent: they <br>
//! are not chained or grouped in wires. <br>
//! If no intersection edge exists, the result is an empty compound object. <br>
//! Note that other objects than TopoDS_Shape <br>
//! shapes involved in these syntaxes are converted <br>
//! into faces or shells before performing the <br>
//! computation of the intersection. A shape resulting <br>
//! from this conversion can be retrieved with the <br>
//! function Shape1 or Shape2. <br>
//! Parametric 2D curves on intersection edges <br>
//! No parametric 2D curve (pcurve) is defined for <br>
//! each elementary edge of the result. To attach such <br>
//! parametric curves to the constructed edges you <br>
//! may use a constructor with the PerformNow flag <br>
//! equal to false; then you use: <br>
//! - the function ComputePCurveOn1 to ask for the <br>
//!   additional computation of a pcurve in the <br>
//!   parametric space of the first shape, <br>
//! - the function ComputePCurveOn2 to ask for the <br>
//!   additional computation of a pcurve in the <br>
//!   parametric space of the second shape, <br>
//! - in the end, the function Build to construct the result. <br>
//!   Note that as a result, pcurves will only be added on <br>
//! edges built on new intersection lines. <br>
//! Approximation of intersection edges <br>
//! The underlying 3D geometry attached to each <br>
//! elementary edge of the result is: <br>
//! - analytic where possible, provided the <br>
//!   corresponding geometry corresponds to a type <br>
//!   of analytic curve defined in the Geom package; <br>
//!   for example, the intersection of a cylindrical <br>
//!   shape with a plane gives an ellipse or a circle; <br>
//! - or elsewhere, given as a succession of points <br>
//!   grouped together in a BSpline curve of degree 1. <br>
//!   If you prefer to have an attached 3D geometry <br>
//! which is a BSpline approximation of the computed <br>
//! set of points on computed elementary intersection <br>
//! edges whose underlying geometry is not analytic, <br>
//! you may use a constructor with the PerformNow <br>
//! flag equal to false. Then you use: <br>
//! - the function Approximation to ask for this <br>
//!   computation option, and <br>
//! - the function Build to construct the result. <br>
//!   Note that as a result, approximations will only be <br>
//! computed on edges built on new intersection lines. <br>
//! Example <br>
//!   You may also combine these computation options. <br>
//! In the following example: <br>
//! - each elementary edge of the computed <br>
//!   intersection, built on a new intersection line, <br>
//!   which does not correspond to an analytic Geom <br>
//!   curve, will be approximated by a BSpline curve <br>
//!   whose degree is not greater than 8. <br>
//! - each elementary edge built on a new intersection line, will have: <br>
//!   - a pcurve in the parametric space of the shape S1, <br>
//!   - no pcurve in the parametric space of the shape S2. <br>
//!     // TopoDS_Shape S1 = ... , S2 = ... ; <br>
//! Standard_Boolean PerformNow = Standard_False; <br>
//! BRepAlgo_Section S ( S1, S2, PerformNow ); <br>
//! S.ComputePCurveOn1 (Standard_True); <br>
//! S.Approximation (Standard_True); <br>
//! S.Build(); <br>
//! TopoDS_Shape R = S.Shape(); <br>
  Standard_EXPORT   BRepAlgo_Section(const Handle(Geom_Surface)& Sf1,const Handle(Geom_Surface)& Sf2,const Standard_Boolean PerformNow = Standard_True);
  //! Initializes the first part <br>
  Standard_EXPORT     void Init1(const TopoDS_Shape& S1) ;
  //! Initializes the first part <br>
  Standard_EXPORT     void Init1(const gp_Pln& Pl) ;
  //! Initializes the first part <br>
  Standard_EXPORT     void Init1(const Handle(Geom_Surface)& Sf) ;
  //! initialize second part <br>
  Standard_EXPORT     void Init2(const TopoDS_Shape& S2) ;
  //! Initializes the second part <br>
  Standard_EXPORT     void Init2(const gp_Pln& Pl) ;
  //! This and the above algorithms <br>
//!   reinitialize the first and the second parts on which <br>
//! this algorithm is going to perform the intersection <br>
//! computation. This is done with either: the surface <br>
//! Sf, the plane Pl or the shape Sh. <br>
//! You use the function Build to construct the result. <br>
  Standard_EXPORT     void Init2(const Handle(Geom_Surface)& Sf) ;
  //! Defines an option for computation of further <br>
//! intersections. This computation will be performed by <br>
//! the function Build in this framework. <br>
//! By default, the underlying 3D geometry attached to <br>
//! each elementary edge of the result of a computed intersection is: <br>
//! - analytic where possible, provided the <br>
//!   corresponding geometry corresponds to a type of <br>
//!   analytic curve defined in the Geom package; for <br>
//!   example the intersection of a cylindrical shape with <br>
//!   a plane gives an ellipse or a circle; <br>
//! - or elsewhere, given as a succession of points <br>
//!   grouped together in a BSpline curve of degree 1. If <br>
//!   Approx equals true, when further computations are <br>
//!   performed in this framework with the function <br>
//!   Build, these edges will have an attached 3D <br>
//!   geometry which is a BSpline approximation of the <br>
//!  computed set of points. <br>
//!   Note that as a result, approximations will be computed <br>
//! on edges built only on new intersection lines. <br>
  Standard_EXPORT     void Approximation(const Standard_Boolean B) ;
  //! Indicates if the Pcurve must be (or not) performed on first part. <br>
  Standard_EXPORT     void ComputePCurveOn1(const Standard_Boolean B) ;
  //! Define options for the computation of further <br>
//! intersections which will be performed by the function <br>
//! Build in this framework. <br>
//! By default, no parametric 2D curve (pcurve) is defined <br>
//! for the elementary edges of the result. <br>
//! If ComputePCurve1 equals true, further computations <br>
//! performed in this framework with the function Build <br>
//! will attach an additional pcurve in the parametric <br>
//! space of the first shape to the constructed edges. <br>
//! If ComputePCurve2 equals true, the additional pcurve <br>
//! will be attached to the constructed edges in the <br>
//! parametric space of the second shape. <br>
//! These two functions may be used together. <br>
//! Note that as a result, pcurves will only be added onto <br>
//! edges built on new intersection lines. <br>
  Standard_EXPORT     void ComputePCurveOn2(const Standard_Boolean B) ;
  //!  Performs the computation of the section lines <br>
//! between the two parts defined at the time of <br>
//! construction of this framework or reinitialized with the <br>
//! Init1 and Init2 functions. <br>
//! The constructed shape will be returned by the function <br>
//! Shape. This is a compound object composed of <br>
//! edges. These intersection edges may be built: <br>
//! - on new intersection lines, or <br>
//! - on coincident portions of edges in the two intersected shapes. <br>
//!   These intersection edges are independent: they are <br>
//! not chained or grouped into wires. <br>
//! If no intersection edge exists, the result is an empty compound object. <br>
//! The shapes involved in the construction of the section <br>
//! lines can be retrieved with the function Shape1 or <br>
//! Shape2. Note that other objects than <br>
//! TopoDS_Shape shapes given as arguments at the <br>
//! construction time of this framework, or to the Init1 or <br>
//!   Init2 function, are converted into faces or shells <br>
//! before performing the computation of the intersection. <br>
//! Parametric 2D curves on intersection edges <br>
//! No parametric 2D curve (pcurve) is defined for the <br>
//! elementary edges of the result. To attach parametric <br>
//! curves like this to the constructed edges you have to use: <br>
//! - the function ComputePCurveOn1 to ask for the <br>
//!   additional computation of a pcurve in the <br>
//!   parametric space of the first shape, <br>
//! - the function ComputePCurveOn2 to ask for the <br>
//!   additional computation of a pcurve in the <br>
//!   parametric space of the second shape. <br>
//! This must be done before calling this function. <br>
//! Note that as a result, pcurves are added on edges <br>
//! built on new intersection lines only. <br>
//! Approximation of intersection edges <br>
//! The underlying 3D geometry attached to each <br>
//! elementary edge of the result is: <br>
//! - analytic where possible provided the corresponding <br>
//!   geometry corresponds to a type of analytic curve <br>
//!   defined in the Geom package; for example, the <br>
//!   intersection of a cylindrical shape with a plane <br>
//!   gives an ellipse or a circle; or <br>
//! - elsewhere, given as a succession of points grouped <br>
//!   together in a BSpline curve of degree 1. <br>
//!   If, on computed elementary intersection edges whose <br>
//! underlying geometry is not analytic, you prefer to <br>
//! have an attached 3D geometry which is a BSpline <br>
//! approximation of the computed set of points, you have <br>
//! to use the function Approximation to ask for this <br>
//! computation option before calling this function. <br>
//! You may also have combined these computation <br>
//! options: look at the example given above to illustrate <br>
//! the use of the constructors. <br>
  Standard_EXPORT     void Build() ;
  //!Identifies the ancestor faces of the new <br>
//! intersection edge E resulting from the last <br>
//! computation performed in this framework, that is, <br>
//! the faces of the two original shapes on which the edge E lies: <br>
//! - HasAncestorFaceOn1 gives the ancestor face <br>
//!   in the first shape, and <br>
//!   These functions return: <br>
//! - true if an ancestor face F is found, or <br>
//! - false if not. <br>
//!   An ancestor face is identifiable for the edge E if the <br>
//! three following conditions are satisfied: <br>
//! - the first part on which this algorithm performed <br>
//!   its last computation is a shape, that is, it was not <br>
//!   given as a surface or a plane at the time of <br>
//!   construction of this algorithm or at a later time by <br>
//!   the Init1 function, <br>
//! - E is one of the elementary edges built by the last <br>
//!   computation of this section algorithm, <br>
//! - the edge E is built on an intersection curve. In <br>
//!   other words, E is a new edge built on the <br>
//!   intersection curve, not on edges belonging to the <br>
//!   intersecting shapes. <br>
//!   To use these functions properly, you have to test <br>
//! the returned Boolean value before using the <br>
//! ancestor face: F is significant only if the returned <br>
//! Boolean value equals true. <br>
  Standard_EXPORT     Standard_Boolean HasAncestorFaceOn1(const TopoDS_Shape& E,TopoDS_Shape& F) const;
  //! Identifies the ancestor faces of the new <br>
//! intersection edge E resulting from the last <br>
//! computation performed in this framework, that is, <br>
//! the faces of the two original shapes on which the edge E lies: <br>
//! - HasAncestorFaceOn2 gives the ancestor face in the second shape. <br>
//!   These functions return: <br>
//! - true if an ancestor face F is found, or <br>
//! - false if not. <br>
//!   An ancestor face is identifiable for the edge E if the <br>
//! three following conditions are satisfied: <br>
//! - the first part on which this algorithm performed <br>
//!   its last computation is a shape, that is, it was not <br>
//!   given as a surface or a plane at the time of <br>
//!   construction of this algorithm or at a later time by <br>
//!   the Init1 function, <br>
//! - E is one of the elementary edges built by the last <br>
//!   computation of this section algorithm, <br>
//! - the edge E is built on an intersection curve. In <br>
//!   other words, E is a new edge built on the <br>
//!   intersection curve, not on edges belonging to the <br>
//!   intersecting shapes. <br>
//!   To use these functions properly, you have to test <br>
//! the returned Boolean value before using the <br>
//! ancestor face: F is significant only if the returned <br>
//! Boolean value equals true. <br>
  Standard_EXPORT     Standard_Boolean HasAncestorFaceOn2(const TopoDS_Shape& E,TopoDS_Shape& F) const;





protected:





private:

  
  Standard_EXPORT   virtual  void InitParameters() ;


Standard_Boolean myS1Changed;
Standard_Boolean myS2Changed;
Standard_Boolean myApproxChanged;
Standard_Boolean myPCurve1Changed;
Standard_Boolean myPCurve2Changed;
Standard_Boolean myshapeisnull;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
