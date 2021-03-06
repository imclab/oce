// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TransferBRep_ShapeBinder_HeaderFile
#define _TransferBRep_ShapeBinder_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TransferBRep_ShapeBinder_HeaderFile
#include <Handle_TransferBRep_ShapeBinder.hxx>
#endif

#ifndef _TransferBRep_BinderOfShape_HeaderFile
#include <TransferBRep_BinderOfShape.hxx>
#endif
#ifndef _TopAbs_ShapeEnum_HeaderFile
#include <TopAbs_ShapeEnum.hxx>
#endif
class Standard_TypeMismatch;
class TopoDS_Shape;
class TopoDS_Vertex;
class TopoDS_Edge;
class TopoDS_Wire;
class TopoDS_Face;
class TopoDS_Shell;
class TopoDS_Solid;
class TopoDS_CompSolid;
class TopoDS_Compound;


//! A ShapeBinder is a BinderOfShape with some additional services <br>
//!           to cast the Result under various kinds of Shapes <br>
class TransferBRep_ShapeBinder : public TransferBRep_BinderOfShape {

public:

  //! Creates an empty ShapeBinder <br>
  Standard_EXPORT   TransferBRep_ShapeBinder();
  //! Creates a ShapeBinder with a result <br>
  Standard_EXPORT   TransferBRep_ShapeBinder(const TopoDS_Shape& res);
  //! Returns the Type of the Shape Result (under TopAbs form) <br>
  Standard_EXPORT     TopAbs_ShapeEnum ShapeType() const;
  
  Standard_EXPORT     TopoDS_Vertex Vertex() const;
  
  Standard_EXPORT     TopoDS_Edge Edge() const;
  
  Standard_EXPORT     TopoDS_Wire Wire() const;
  
  Standard_EXPORT     TopoDS_Face Face() const;
  
  Standard_EXPORT     TopoDS_Shell Shell() const;
  
  Standard_EXPORT     TopoDS_Solid Solid() const;
  
  Standard_EXPORT     TopoDS_CompSolid CompSolid() const;
  
  Standard_EXPORT     TopoDS_Compound Compound() const;




  DEFINE_STANDARD_RTTI(TransferBRep_ShapeBinder)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
