// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDraw_HeaderFile
#define _IGESDraw_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_IGESDraw_Protocol_HeaderFile
#include <Handle_IGESDraw_Protocol.hxx>
#endif
class IGESDraw_Protocol;
class IGESDraw_ConnectPoint;
class IGESDraw_NetworkSubfigureDef;
class IGESDraw_ViewsVisible;
class IGESDraw_ViewsVisibleWithAttr;
class IGESDraw_LabelDisplay;
class IGESDraw_Planar;
class IGESDraw_SegmentedViewsVisible;
class IGESDraw_Drawing;
class IGESDraw_DrawingWithRotation;
class IGESDraw_View;
class IGESDraw_RectArraySubfigure;
class IGESDraw_CircArraySubfigure;
class IGESDraw_NetworkSubfigure;
class IGESDraw_PerspectiveView;
class IGESDraw_ToolConnectPoint;
class IGESDraw_ToolNetworkSubfigureDef;
class IGESDraw_ToolViewsVisible;
class IGESDraw_ToolViewsVisibleWithAttr;
class IGESDraw_ToolLabelDisplay;
class IGESDraw_ToolPlanar;
class IGESDraw_ToolSegmentedViewsVisible;
class IGESDraw_ToolDrawing;
class IGESDraw_ToolDrawingWithRotation;
class IGESDraw_ToolView;
class IGESDraw_ToolRectArraySubfigure;
class IGESDraw_ToolCircArraySubfigure;
class IGESDraw_ToolNetworkSubfigure;
class IGESDraw_ToolPerspectiveView;
class IGESDraw_Protocol;
class IGESDraw_ReadWriteModule;
class IGESDraw_GeneralModule;
class IGESDraw_SpecificModule;
class IGESDraw_Array1OfConnectPoint;
class IGESDraw_Array1OfViewKindEntity;
class IGESDraw_HArray1OfConnectPoint;
class IGESDraw_HArray1OfViewKindEntity;


//! This package contains the group of classes necessary for <br>
//!           Structure Entities implied in Drawings and Structured <br>
//!           Graphics (Sets for drawing, Drawings and Views). <br>
class IGESDraw  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Prepares dynamic data (Protocol, Modules) for this package <br>
  Standard_EXPORT   static  void Init() ;
  //! Returns the Protocol for this Package <br>
  Standard_EXPORT   static  Handle_IGESDraw_Protocol Protocol() ;





protected:





private:




friend class IGESDraw_ConnectPoint;
friend class IGESDraw_NetworkSubfigureDef;
friend class IGESDraw_ViewsVisible;
friend class IGESDraw_ViewsVisibleWithAttr;
friend class IGESDraw_LabelDisplay;
friend class IGESDraw_Planar;
friend class IGESDraw_SegmentedViewsVisible;
friend class IGESDraw_Drawing;
friend class IGESDraw_DrawingWithRotation;
friend class IGESDraw_View;
friend class IGESDraw_RectArraySubfigure;
friend class IGESDraw_CircArraySubfigure;
friend class IGESDraw_NetworkSubfigure;
friend class IGESDraw_PerspectiveView;
friend class IGESDraw_ToolConnectPoint;
friend class IGESDraw_ToolNetworkSubfigureDef;
friend class IGESDraw_ToolViewsVisible;
friend class IGESDraw_ToolViewsVisibleWithAttr;
friend class IGESDraw_ToolLabelDisplay;
friend class IGESDraw_ToolPlanar;
friend class IGESDraw_ToolSegmentedViewsVisible;
friend class IGESDraw_ToolDrawing;
friend class IGESDraw_ToolDrawingWithRotation;
friend class IGESDraw_ToolView;
friend class IGESDraw_ToolRectArraySubfigure;
friend class IGESDraw_ToolCircArraySubfigure;
friend class IGESDraw_ToolNetworkSubfigure;
friend class IGESDraw_ToolPerspectiveView;
friend class IGESDraw_Protocol;
friend class IGESDraw_ReadWriteModule;
friend class IGESDraw_GeneralModule;
friend class IGESDraw_SpecificModule;
friend class IGESDraw_Array1OfConnectPoint;
friend class IGESDraw_Array1OfViewKindEntity;
friend class IGESDraw_HArray1OfConnectPoint;
friend class IGESDraw_HArray1OfViewKindEntity;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif