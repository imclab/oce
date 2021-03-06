// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntSurf_PathPoint_HeaderFile
#define _IntSurf_PathPoint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _gp_Vec_HeaderFile
#include <gp_Vec.hxx>
#endif
#ifndef _gp_Dir2d_HeaderFile
#include <gp_Dir2d.hxx>
#endif
#ifndef _Handle_TColgp_HSequenceOfXY_HeaderFile
#include <Handle_TColgp_HSequenceOfXY.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class TColgp_HSequenceOfXY;
class StdFail_UndefinedDerivative;
class Standard_OutOfRange;
class gp_Pnt;
class gp_Vec;
class gp_Dir2d;



class IntSurf_PathPoint  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   IntSurf_PathPoint();
  
  Standard_EXPORT   IntSurf_PathPoint(const gp_Pnt& P,const Standard_Real U,const Standard_Real V);
  
  Standard_EXPORT     void SetValue(const gp_Pnt& P,const Standard_Real U,const Standard_Real V) ;
  
        void AddUV(const Standard_Real U,const Standard_Real V) ;
  
        void SetDirections(const gp_Vec& V,const gp_Dir2d& D) ;
  
        void SetTangency(const Standard_Boolean Tang) ;
  
        void SetPassing(const Standard_Boolean Pass) ;
  
       const gp_Pnt& Value() const;
  
        void Value2d(Standard_Real& U,Standard_Real& V) const;
  
        Standard_Boolean IsPassingPnt() const;
  
        Standard_Boolean IsTangent() const;
  
       const gp_Vec& Direction3d() const;
  
       const gp_Dir2d& Direction2d() const;
  
        Standard_Integer Multiplicity() const;
  
        void Parameters(const Standard_Integer Index,Standard_Real& U,Standard_Real& V) const;





protected:





private:



gp_Pnt pt;
Standard_Boolean ispass;
Standard_Boolean istgt;
gp_Vec vectg;
gp_Dir2d dirtg;
Handle_TColgp_HSequenceOfXY sequv;


};


#include <IntSurf_PathPoint.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
