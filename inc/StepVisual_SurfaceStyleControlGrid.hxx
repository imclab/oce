// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_SurfaceStyleControlGrid_HeaderFile
#define _StepVisual_SurfaceStyleControlGrid_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepVisual_SurfaceStyleControlGrid_HeaderFile
#include <Handle_StepVisual_SurfaceStyleControlGrid.hxx>
#endif

#ifndef _Handle_StepVisual_CurveStyle_HeaderFile
#include <Handle_StepVisual_CurveStyle.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class StepVisual_CurveStyle;



class StepVisual_SurfaceStyleControlGrid : public MMgt_TShared {

public:

  //! Returns a SurfaceStyleControlGrid <br>
  Standard_EXPORT   StepVisual_SurfaceStyleControlGrid();
  
  Standard_EXPORT   virtual  void Init(const Handle(StepVisual_CurveStyle)& aStyleOfControlGrid) ;
  
  Standard_EXPORT     void SetStyleOfControlGrid(const Handle(StepVisual_CurveStyle)& aStyleOfControlGrid) ;
  
  Standard_EXPORT     Handle_StepVisual_CurveStyle StyleOfControlGrid() const;




  DEFINE_STANDARD_RTTI(StepVisual_SurfaceStyleControlGrid)

protected:




private: 


Handle_StepVisual_CurveStyle styleOfControlGrid;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
