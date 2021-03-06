// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_Array1OfSecurityClassificationItem_HeaderFile
#define _StepAP214_Array1OfSecurityClassificationItem_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepAP214_SecurityClassificationItem;



class StepAP214_Array1OfSecurityClassificationItem  {
public:

  DEFINE_STANDARD_ALLOC

  
      StepAP214_Array1OfSecurityClassificationItem(const Standard_Integer Low,const Standard_Integer Up);
  
      StepAP214_Array1OfSecurityClassificationItem(const StepAP214_SecurityClassificationItem& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const StepAP214_SecurityClassificationItem& V) ;
  
        void Destroy() ;
~StepAP214_Array1OfSecurityClassificationItem()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const StepAP214_Array1OfSecurityClassificationItem& Assign(const StepAP214_Array1OfSecurityClassificationItem& Other) ;
   const StepAP214_Array1OfSecurityClassificationItem& operator =(const StepAP214_Array1OfSecurityClassificationItem& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const StepAP214_SecurityClassificationItem& Value) ;
  
       const StepAP214_SecurityClassificationItem& Value(const Standard_Integer Index) const;
     const StepAP214_SecurityClassificationItem& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        StepAP214_SecurityClassificationItem& ChangeValue(const Standard_Integer Index) ;
      StepAP214_SecurityClassificationItem& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   StepAP214_Array1OfSecurityClassificationItem(const StepAP214_Array1OfSecurityClassificationItem& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item StepAP214_SecurityClassificationItem
#define Array1Item_hxx <StepAP214_SecurityClassificationItem.hxx>
#define TCollection_Array1 StepAP214_Array1OfSecurityClassificationItem
#define TCollection_Array1_hxx <StepAP214_Array1OfSecurityClassificationItem.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
