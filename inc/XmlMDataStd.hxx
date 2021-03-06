// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlMDataStd_HeaderFile
#define _XmlMDataStd_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_XmlMDF_ADriverTable_HeaderFile
#include <Handle_XmlMDF_ADriverTable.hxx>
#endif
#ifndef _Handle_CDM_MessageDriver_HeaderFile
#include <Handle_CDM_MessageDriver.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class XmlMDF_ADriverTable;
class CDM_MessageDriver;
class XmlMDataStd_NameDriver;
class XmlMDataStd_IntegerDriver;
class XmlMDataStd_RealDriver;
class XmlMDataStd_IntegerArrayDriver;
class XmlMDataStd_RealArrayDriver;
class XmlMDataStd_ExtStringArrayDriver;
class XmlMDataStd_UAttributeDriver;
class XmlMDataStd_DirectoryDriver;
class XmlMDataStd_CommentDriver;
class XmlMDataStd_VariableDriver;
class XmlMDataStd_ExpressionDriver;
class XmlMDataStd_RelationDriver;
class XmlMDataStd_NoteBookDriver;
class XmlMDataStd_TreeNodeDriver;
class XmlMDataStd_TickDriver;
class XmlMDataStd_IntegerListDriver;
class XmlMDataStd_RealListDriver;
class XmlMDataStd_ExtStringListDriver;
class XmlMDataStd_BooleanListDriver;
class XmlMDataStd_ReferenceListDriver;
class XmlMDataStd_BooleanArrayDriver;
class XmlMDataStd_ReferenceArrayDriver;
class XmlMDataStd_ByteArrayDriver;
class XmlMDataStd_NamedDataDriver;
class XmlMDataStd_AsciiStringDriver;
class XmlMDataStd_IntPackedMapDriver;


//! Storage and Retrieval drivers for modelling attributes. <br>
//!          Transient attributes are defined in package TDataStd. <br>
class XmlMDataStd  {
public:

  DEFINE_STANDARD_ALLOC

  //! Adds the attribute drivers to <aDriverTable>. <br>
  Standard_EXPORT   static  void AddDrivers(const Handle(XmlMDF_ADriverTable)& aDriverTable,const Handle(CDM_MessageDriver)& anMsgDrv) ;
  
  Standard_EXPORT   static  void SetDocumentVersion(const Standard_Integer DocVersion) ;
  
  Standard_EXPORT   static  Standard_Integer DocumentVersion() ;





protected:





private:




friend class XmlMDataStd_NameDriver;
friend class XmlMDataStd_IntegerDriver;
friend class XmlMDataStd_RealDriver;
friend class XmlMDataStd_IntegerArrayDriver;
friend class XmlMDataStd_RealArrayDriver;
friend class XmlMDataStd_ExtStringArrayDriver;
friend class XmlMDataStd_UAttributeDriver;
friend class XmlMDataStd_DirectoryDriver;
friend class XmlMDataStd_CommentDriver;
friend class XmlMDataStd_VariableDriver;
friend class XmlMDataStd_ExpressionDriver;
friend class XmlMDataStd_RelationDriver;
friend class XmlMDataStd_NoteBookDriver;
friend class XmlMDataStd_TreeNodeDriver;
friend class XmlMDataStd_TickDriver;
friend class XmlMDataStd_IntegerListDriver;
friend class XmlMDataStd_RealListDriver;
friend class XmlMDataStd_ExtStringListDriver;
friend class XmlMDataStd_BooleanListDriver;
friend class XmlMDataStd_ReferenceListDriver;
friend class XmlMDataStd_BooleanArrayDriver;
friend class XmlMDataStd_ReferenceArrayDriver;
friend class XmlMDataStd_ByteArrayDriver;
friend class XmlMDataStd_NamedDataDriver;
friend class XmlMDataStd_AsciiStringDriver;
friend class XmlMDataStd_IntPackedMapDriver;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
