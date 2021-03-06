// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlLDrivers_HeaderFile
#define _XmlLDrivers_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_XmlMDF_ADriverTable_HeaderFile
#include <Handle_XmlMDF_ADriverTable.hxx>
#endif
#ifndef _Handle_CDM_MessageDriver_HeaderFile
#include <Handle_CDM_MessageDriver.hxx>
#endif
class Standard_Transient;
class Standard_GUID;
class TCollection_AsciiString;
class XmlMDF_ADriverTable;
class CDM_MessageDriver;
class XmlLDrivers_DocumentStorageDriver;
class XmlLDrivers_DocumentRetrievalDriver;
class XmlLDrivers_NamespaceDef;
class XmlLDrivers_SequenceOfNamespaceDef;
class XmlLDrivers_SequenceNodeOfSequenceOfNamespaceDef;



class XmlLDrivers  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   static  Handle_Standard_Transient Factory(const Standard_GUID& theGUID) ;
  
  Standard_EXPORT   static  TCollection_AsciiString CreationDate() ;
  
  Standard_EXPORT   static  Handle_XmlMDF_ADriverTable AttributeDrivers(const Handle(CDM_MessageDriver)& theMsgDriver) ;
  
  Standard_EXPORT   static  TCollection_AsciiString StorageVersion() ;





protected:





private:




friend class XmlLDrivers_DocumentStorageDriver;
friend class XmlLDrivers_DocumentRetrievalDriver;
friend class XmlLDrivers_NamespaceDef;
friend class XmlLDrivers_SequenceOfNamespaceDef;
friend class XmlLDrivers_SequenceNodeOfSequenceOfNamespaceDef;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
