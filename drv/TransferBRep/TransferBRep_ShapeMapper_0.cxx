// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <TransferBRep_ShapeMapper.hxx>

#ifndef _Standard_Type_HeaderFile
#include <Standard_Type.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _TopTools_ShapeMapHasher_HeaderFile
#include <TopTools_ShapeMapHasher.hxx>
#endif
#ifndef _TransferBRep_ShapeInfo_HeaderFile
#include <TransferBRep_ShapeInfo.hxx>
#endif
#ifndef _Transfer_Finder_HeaderFile
#include <Transfer_Finder.hxx>
#endif
#ifndef _Standard_Type_HeaderFile
#include <Standard_Type.hxx>
#endif

 


IMPLEMENT_STANDARD_TYPE(TransferBRep_ShapeMapper)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Transfer_Finder),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(TransferBRep_ShapeMapper)


IMPLEMENT_DOWNCAST(TransferBRep_ShapeMapper,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(TransferBRep_ShapeMapper)


#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define TheHasher TopTools_ShapeMapHasher
#define TheHasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TheInfo TransferBRep_ShapeInfo
#define TheInfo_hxx <TransferBRep_ShapeInfo.hxx>
#define Transfer_Mapper TransferBRep_ShapeMapper
#define Transfer_Mapper_hxx <TransferBRep_ShapeMapper.hxx>
#define Handle_Transfer_Mapper Handle_TransferBRep_ShapeMapper
#define Transfer_Mapper_Type_() TransferBRep_ShapeMapper_Type_()
#include <Transfer_Mapper.gxx>

