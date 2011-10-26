// This file is generated by WOK (CSFDBSchema).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeSchema_gp_Ax2_HeaderFile
#define _ShapeSchema_gp_Ax2_HeaderFile

#ifndef _Handle_Storage_Schema_HeaderFile
#include <Handle_Storage_Schema.hxx>
#endif
#ifndef _Storage_BaseDriver_HeaderFile
#include <Storage_BaseDriver.hxx>
#endif

#ifndef _ShapeSchema_Standard_Storable_HeaderFile
#include <ShapeSchema_Standard_Storable.hxx>
#endif


class gp_Ax2;

class ShapeSchema_gp_Ax2 {
public:
  Standard_EXPORT static void SAdd(const gp_Ax2&,const Handle(Storage_Schema)& aSchema);
  Standard_EXPORT static void SWrite(const gp_Ax2&,Storage_BaseDriver& aDriver,const Handle(Storage_Schema)& aSchema);
  Standard_EXPORT static void SRead(gp_Ax2&,Storage_BaseDriver& aDriver,const Handle(Storage_Schema)& aSchema);
};
#endif