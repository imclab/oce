// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ChFiDS_CommonPoint_HeaderFile
#define _ChFiDS_CommonPoint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Edge_HeaderFile
#include <TopoDS_Edge.hxx>
#endif
#ifndef _TopoDS_Vertex_HeaderFile
#include <TopoDS_Vertex.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _gp_Vec_HeaderFile
#include <gp_Vec.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif
class Standard_DomainError;
class Standard_TypeMismatch;
class TopoDS_Vertex;
class TopoDS_Edge;
class gp_Pnt;
class gp_Vec;



class ChFiDS_CommonPoint  {
public:

  DEFINE_STANDARD_ALLOC

  //! Empty constructor. <br>
  Standard_EXPORT   ChFiDS_CommonPoint();
  //! default value for all fields <br>
  Standard_EXPORT     void Reset() ;
  //! Sets the values of a point which is a vertex on <br>
//!          the initial facet of restriction of one <br>
//!          of the surface. <br>
        void SetVertex(const TopoDS_Vertex& V) ;
  //! Sets the values of a point which is on the arc <br>
//!          A, at parameter Param. <br>
  Standard_EXPORT     void SetArc(const Standard_Real Tol,const TopoDS_Edge& A,const Standard_Real Param,const TopAbs_Orientation TArc) ;
  //! Sets the value of the parameter on the spine <br>
  Standard_EXPORT     void SetParameter(const Standard_Real Param) ;
  //! Set the 3d point for a commonpoint that is not <br>
//!          a vertex or on an arc. <br>
        void SetPoint(const gp_Pnt& Point) ;
  //! Set the output 3d  vector <br>
        void SetVector(const gp_Vec& Vector) ;
  //! This method set the fuzziness on the point. <br>
        void SetTolerance(const Standard_Real Tol) ;
  //! This method returns the fuzziness on the point. <br>
        Standard_Real Tolerance() const;
  //! Returns TRUE if the point is a vertex on the initial <br>
//!          restriction facet of the surface. <br>
        Standard_Boolean IsVertex() const;
  //! Returns the information about the point when it is <br>
//!          on the domain of the first patch, i-e when the function <br>
//!          IsVertex returns True. <br>
//!          Otherwise, an exception is raised. <br>
       const TopoDS_Vertex& Vertex() const;
  //! Returns TRUE if the point is a on an edge of the initial <br>
//!          restriction facet of the surface. <br>
        Standard_Boolean IsOnArc() const;
  //! Returns the arc of restriction containing the <br>
//!          vertex. <br>
  Standard_EXPORT    const TopoDS_Edge& Arc() const;
  //! Returns the transition of the point on the arc <br>
//!          returned by Arc(). <br>
  Standard_EXPORT     TopAbs_Orientation TransitionOnArc() const;
  //! Returns the parameter of the point on the <br>
//!          arc returned by the method Arc(). <br>
  Standard_EXPORT     Standard_Real ParameterOnArc() const;
  //! Returns  the parameter the  paramter on the  spine <br>
  Standard_EXPORT     Standard_Real Parameter() const;
  //! Returns the 3d point <br>
       const gp_Pnt& Point() const;
  //! Returns TRUE if the output vector is  stored. <br>
        Standard_Boolean HasVector() const;
  //! Returns the output  3d vector <br>
       const gp_Vec& Vector() const;





protected:





private:



TopoDS_Edge arc;
TopoDS_Vertex vtx;
gp_Pnt point;
gp_Vec vector;
Standard_Real tol;
Standard_Real prmarc;
Standard_Real prmtg;
Standard_Boolean isonarc;
TopAbs_Orientation traarc;
Standard_Boolean isvtx;
Standard_Boolean hasvector;


};


#include <ChFiDS_CommonPoint.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
