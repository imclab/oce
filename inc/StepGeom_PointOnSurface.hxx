// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_PointOnSurface_HeaderFile
#define _StepGeom_PointOnSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepGeom_PointOnSurface_HeaderFile
#include <Handle_StepGeom_PointOnSurface.hxx>
#endif

#ifndef _Handle_StepGeom_Surface_HeaderFile
#include <Handle_StepGeom_Surface.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _StepGeom_Point_HeaderFile
#include <StepGeom_Point.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class StepGeom_Surface;
class TCollection_HAsciiString;



class StepGeom_PointOnSurface : public StepGeom_Point {

public:

  //! Returns a PointOnSurface <br>
  Standard_EXPORT   StepGeom_PointOnSurface();
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const Handle(StepGeom_Surface)& aBasisSurface,const Standard_Real aPointParameterU,const Standard_Real aPointParameterV) ;
  
  Standard_EXPORT     void SetBasisSurface(const Handle(StepGeom_Surface)& aBasisSurface) ;
  
  Standard_EXPORT     Handle_StepGeom_Surface BasisSurface() const;
  
  Standard_EXPORT     void SetPointParameterU(const Standard_Real aPointParameterU) ;
  
  Standard_EXPORT     Standard_Real PointParameterU() const;
  
  Standard_EXPORT     void SetPointParameterV(const Standard_Real aPointParameterV) ;
  
  Standard_EXPORT     Standard_Real PointParameterV() const;




  DEFINE_STANDARD_RTTI(StepGeom_PointOnSurface)

protected:




private: 


Handle_StepGeom_Surface basisSurface;
Standard_Real pointParameterU;
Standard_Real pointParameterV;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
