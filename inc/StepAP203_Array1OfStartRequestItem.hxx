// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP203_Array1OfStartRequestItem_HeaderFile
#define _StepAP203_Array1OfStartRequestItem_HeaderFile

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
class StepAP203_StartRequestItem;



class StepAP203_Array1OfStartRequestItem  {
public:

  DEFINE_STANDARD_ALLOC

  
      StepAP203_Array1OfStartRequestItem(const Standard_Integer Low,const Standard_Integer Up);
  
      StepAP203_Array1OfStartRequestItem(const StepAP203_StartRequestItem& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const StepAP203_StartRequestItem& V) ;
  
        void Destroy() ;
~StepAP203_Array1OfStartRequestItem()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const StepAP203_Array1OfStartRequestItem& Assign(const StepAP203_Array1OfStartRequestItem& Other) ;
   const StepAP203_Array1OfStartRequestItem& operator =(const StepAP203_Array1OfStartRequestItem& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const StepAP203_StartRequestItem& Value) ;
  
       const StepAP203_StartRequestItem& Value(const Standard_Integer Index) const;
     const StepAP203_StartRequestItem& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        StepAP203_StartRequestItem& ChangeValue(const Standard_Integer Index) ;
      StepAP203_StartRequestItem& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   StepAP203_Array1OfStartRequestItem(const StepAP203_Array1OfStartRequestItem& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item StepAP203_StartRequestItem
#define Array1Item_hxx <StepAP203_StartRequestItem.hxx>
#define TCollection_Array1 StepAP203_Array1OfStartRequestItem
#define TCollection_Array1_hxx <StepAP203_Array1OfStartRequestItem.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
