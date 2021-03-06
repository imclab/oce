// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom_ConicalSurface_HeaderFile
#define _Geom_ConicalSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Geom_ConicalSurface_HeaderFile
#include <Handle_Geom_ConicalSurface.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Geom_ElementarySurface_HeaderFile
#include <Geom_ElementarySurface.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Geom_Geometry_HeaderFile
#include <Handle_Geom_Geometry.hxx>
#endif
class Standard_ConstructionError;
class Standard_RangeError;
class gp_Ax3;
class gp_Cone;
class gp_Trsf;
class gp_GTrsf2d;
class gp_Pnt;
class Geom_Curve;
class gp_Vec;
class Geom_Geometry;


//!  Describes a cone. <br>
//!    A cone is defined by the half-angle at its apex, and <br>
//!    is positioned in space by a coordinate system (a <br>
//!    gp_Ax3 object) and a reference radius as follows: <br>
//! - The "main Axis" of the coordinate system is the <br>
//!   axis of revolution of the cone. <br>
//! - The plane defined by the origin, the "X Direction" <br>
//!   and the "Y Direction" of the coordinate system is <br>
//!   the reference plane of the cone. The intersection <br>
//!   of the cone with this reference plane is a circle of <br>
//!   radius equal to the reference radius. <br>
//! - The apex of the cone is on the negative side of <br>
//!   the "main Axis" of the coordinate system if the <br>
//!   half-angle is positive, and on the positive side if <br>
//!   the half-angle is negative. <br>
//!   This coordinate system is the "local coordinate <br>
//!   system" of the cone. The following apply: <br>
//! - Rotation around its "main Axis", in the <br>
//!   trigonometric sense given by the "X Direction" <br>
//!   and the "Y Direction", defines the u parametric direction. <br>
//! - Its "X Axis" gives the origin for the u parameter. <br>
//! - Its "main Direction" is the v parametric direction of the cone. <br>
//! - Its origin is the origin of the v parameter. <br>
//!   The parametric range of the two parameters is: <br>
//! - [ 0, 2.*Pi ] for u, and - ] -infinity, +infinity [ for v <br>
//!   The parametric equation of the cone is:  P(u, v) = <br>
//!   O + (R + v*sin(Ang)) * (cos(u)*XDir + sin(u)*YDir) + v*cos(Ang)*ZDir where: <br>
//! - O, XDir, YDir and ZDir are respectively <br>
//!   the origin, the "X Direction", the "Y Direction" and <br>
//!   the "Z Direction" of the cone's local coordinate system, <br>
//! - Ang is the half-angle at the apex of the cone,   and <br>
//! - R is the reference radius. <br>
class Geom_ConicalSurface : public Geom_ElementarySurface {

public:

  
//!  A3 defines the local coordinate system of the conical surface. <br>
//!  Ang is the conical surface semi-angle ]0, PI/2[. <br>
//!  Radius is the radius of the circle Viso in the placement plane <br>
//!  of the conical surface defined with "XAxis" and "YAxis". <br>
//!  The "ZDirection" of A3 defines the direction of the surface's <br>
//!  axis of symmetry. <br>
//!  If the location point of A3 is the apex of the surface <br>
//!  Radius = 0 . <br>
//!  At the creation the parametrization of the surface is defined <br>
//!  such that the normal Vector (N = D1U ^ D1V) is oriented towards <br>
//!  the "outside region" of the surface. <br>
//!  Raised if Radius < 0.0 or Ang < Resolution from gp or <br>
//!  Ang >= PI/2 - Resolution <br>
  Standard_EXPORT   Geom_ConicalSurface(const gp_Ax3& A3,const Standard_Real Ang,const Standard_Real Radius);
  
//!  Creates a ConicalSurface from a non transient Cone from <br>
//!  package gp. <br>
  Standard_EXPORT   Geom_ConicalSurface(const gp_Cone& C);
  
//!  Set <me> so that <me> has the same geometric properties as C. <br>
  Standard_EXPORT     void SetCone(const gp_Cone& C) ;
  
//!  Changes the radius of the conical surface in the placement <br>
//!  plane (Z = 0, V = 0).  The local coordinate system is not <br>
//!  modified. <br>//! Raised if R < 0.0 <br>
  Standard_EXPORT     void SetRadius(const Standard_Real R) ;
  
//!  Changes the semi angle of the conical surface. <br>
//!  Raised if Ang < Resolution or Ang >= PI/2 - Resolution <br>
  Standard_EXPORT     void SetSemiAngle(const Standard_Real Ang) ;
  
//!  returns a non transient cone with the same geometric properties <br>
//!  as <me>. <br>
  Standard_EXPORT     gp_Cone Cone() const;
  //! return 2.PI - U. <br>
  Standard_EXPORT     Standard_Real UReversedParameter(const Standard_Real U) const;
  //! Computes the u (or v) parameter on the modified <br>
//! surface, when reversing its u (or v) parametric <br>
//! direction, for any point of u parameter U (or of v <br>
//! parameter V) on this cone. <br>
//! In the case of a cone, these functions return respectively: <br>
//! - 2.*Pi - U, -V. <br>
  Standard_EXPORT     Standard_Real VReversedParameter(const Standard_Real V) const;
  //! Changes the orientation of this cone in the v <br>
//! parametric direction. The bounds of the surface are <br>
//! not changed but the v parametric direction is reversed. <br>
//! As a consequence, for a cone: <br>
//! - the "main Direction" of the local coordinate system <br>
//!   is reversed, and <br>
//! - the half-angle at the apex is inverted. <br>
  Standard_EXPORT   virtual  void VReverse() ;
  //! Computes the  parameters on the  transformed  surface for <br>
//!          the transform of the point of parameters U,V on <me>. <br>
//! <br>
//!          me->Transformed(T)->Value(U',V') <br>
//! <br>
//!          is the same point as <br>
//! <br>
//!          me->Value(U,V).Transformed(T) <br>
//! <br>
//!          Where U',V' are the new values of U,V after calling <br>
//! <br>
//!          me->TranformParameters(U,V,T) <br>
//! <br>
//!          This methods multiplies V by T.ScaleFactor() <br>
  Standard_EXPORT   virtual  void TransformParameters(Standard_Real& U,Standard_Real& V,const gp_Trsf& T) const;
  //! Returns a 2d transformation  used to find the  new <br>
//!          parameters of a point on the transformed surface. <br>
//! <br>
//!          me->Transformed(T)->Value(U',V') <br>
//! <br>
//!          is the same point as <br>
//! <br>
//!          me->Value(U,V).Transformed(T) <br>
//! <br>
//!          Where U',V' are  obtained by transforming U,V with <br>
//!          th 2d transformation returned by <br>
//! <br>
//!          me->ParametricTransformation(T) <br>
//! <br>
//!          This  methods  returns  a scale  centered  on  the <br>
//!          U axis with T.ScaleFactor <br>
  Standard_EXPORT   virtual  gp_GTrsf2d ParametricTransformation(const gp_Trsf& T) const;
  //! Computes the apex of this cone. It is on the negative <br>
//! side of the axis of revolution of this cone if the <br>
//! half-angle at the apex is positive, and on the positive <br>
//! side of the "main Axis" if the half-angle is negative. <br>
  Standard_EXPORT     gp_Pnt Apex() const;
  
//!  The conical surface is infinite in the V direction so <br>
//!  V1 = Realfirst from Standard and V2 = RealLast. <br>
//!  U1 = 0 and U2 = 2*PI. <br>
  Standard_EXPORT     void Bounds(Standard_Real& U1,Standard_Real& U2,Standard_Real& V1,Standard_Real& V2) const;
  
//!  Returns the coefficients of the implicit equation of the <br>
//!  quadric in the absolute cartesian coordinate system : <br>
//!  These coefficients are normalized. <br>
//!  A1.X**2 + A2.Y**2 + A3.Z**2 + 2.(B1.X.Y + B2.X.Z + B3.Y.Z) + <br>
//!  2.(C1.X + C2.Y + C3.Z) + D = 0.0 <br>
  Standard_EXPORT     void Coefficients(Standard_Real& A1,Standard_Real& A2,Standard_Real& A3,Standard_Real& B1,Standard_Real& B2,Standard_Real& B3,Standard_Real& C1,Standard_Real& C2,Standard_Real& C3,Standard_Real& D) const;
  //! Returns the reference radius of this cone. <br>
//! The reference radius is the radius of the circle formed <br>
//! by the intersection of this cone and its reference <br>
//! plane (i.e. the plane defined by the origin, "X <br>
//! Direction" and "Y Direction" of the local coordinate <br>
//! system of this cone). <br>
//! If the apex of this cone is on the origin of the local <br>
//! coordinate system of this cone, the returned value is 0. <br>
  Standard_EXPORT     Standard_Real RefRadius() const;
  
//!  returns the semi-angle of the conical surface ]0.0, PI/2[. <br>
  Standard_EXPORT     Standard_Real SemiAngle() const;
  //! returns True. <br>
  Standard_EXPORT     Standard_Boolean IsUClosed() const;
  //! returns False. <br>
  Standard_EXPORT     Standard_Boolean IsVClosed() const;
  //! Returns True. <br>
  Standard_EXPORT     Standard_Boolean IsUPeriodic() const;
  //! Returns False. <br>
  Standard_EXPORT     Standard_Boolean IsVPeriodic() const;
  //! Builds the U isoparametric line of this cone. The <br>
//!  origin of this line is on the reference plane of this <br>
//!  cone (i.e. the plane defined by the origin, "X Direction" <br>
//!  and "Y Direction" of the local coordinate system of this cone). <br>
  Standard_EXPORT     Handle_Geom_Curve UIso(const Standard_Real U) const;
  //! Builds the V isoparametric circle of this cone. It is the <br>
//! circle on this cone, located in the plane of Z <br>
//! coordinate V*cos(Semi-Angle) in the local coordinate system of this <br>
//! cone. The "Axis" of this circle is the axis of revolution <br>
//! of this cone. Its starting point is defined by the "X <br>
//! Direction" of this cone. <br>
//! Warning <br>
//! If the V isoparametric circle is close to the apex of <br>
//! this cone, the radius of the circle becomes very small. <br>
//! It is possible to have a circle with radius equal to 0.0. <br>
  Standard_EXPORT     Handle_Geom_Curve VIso(const Standard_Real V) const;
  
//!  Computes the  point P (U, V) on the surface. <br>
//!  P (U, V) = Loc + <br>
//!  (RefRadius + V * sin (Semi-Angle)) * (cos (U) * XDir + sin (U) * YDir) + <br>
//!  V * cos (Semi-Angle) * ZDir <br>
//!  where Loc is the origin of the placement plane (XAxis, YAxis) <br>
//!  XDir is the direction of the XAxis and YDir the direction of <br>
//!  the YAxis. <br>
  Standard_EXPORT     void D0(const Standard_Real U,const Standard_Real V,gp_Pnt& P) const;
  
//!  Computes the current point and the first derivatives in the <br>
//!  directions U and V. <br>
  Standard_EXPORT     void D1(const Standard_Real U,const Standard_Real V,gp_Pnt& P,gp_Vec& D1U,gp_Vec& D1V) const;
  
//!  Computes the current point, the first and the second derivatives <br>
//!  in the directions U and V. <br>
  Standard_EXPORT     void D2(const Standard_Real U,const Standard_Real V,gp_Pnt& P,gp_Vec& D1U,gp_Vec& D1V,gp_Vec& D2U,gp_Vec& D2V,gp_Vec& D2UV) const;
  
//!  Computes the current point, the first,the second and the third <br>
//!  derivatives in the directions U and V. <br>
  Standard_EXPORT     void D3(const Standard_Real U,const Standard_Real V,gp_Pnt& P,gp_Vec& D1U,gp_Vec& D1V,gp_Vec& D2U,gp_Vec& D2V,gp_Vec& D2UV,gp_Vec& D3U,gp_Vec& D3V,gp_Vec& D3UUV,gp_Vec& D3UVV) const;
  //! Computes the derivative of order Nu in the u <br>
//! parametric direction, and Nv in the v parametric <br>
//! direction at the point of parameters (U, V) of this cone. <br>
//! Exceptions <br>
//! Standard_RangeError if: <br>
//! - Nu + Nv is less than 1, <br>
//! - Nu or Nv is negative. <br>
  Standard_EXPORT     gp_Vec DN(const Standard_Real U,const Standard_Real V,const Standard_Integer Nu,const Standard_Integer Nv) const;
  //! Applies the transformation T to this cone. <br>
  Standard_EXPORT     void Transform(const gp_Trsf& T) ;
  //! Creates a new object which is a copy of this cone. <br>
  Standard_EXPORT     Handle_Geom_Geometry Copy() const;




  DEFINE_STANDARD_RTTI(Geom_ConicalSurface)

protected:




private: 


Standard_Real radius;
Standard_Real semiAngle;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
