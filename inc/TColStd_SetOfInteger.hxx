// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_SetOfInteger_HeaderFile
#define _TColStd_SetOfInteger_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TColStd_SetListOfSetOfInteger_HeaderFile
#include <TColStd_SetListOfSetOfInteger.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TColStd_ListNodeOfSetListOfSetOfInteger_HeaderFile
#include <Handle_TColStd_ListNodeOfSetListOfSetOfInteger.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class TColStd_SetIteratorOfSetOfInteger;
class TColStd_SetListOfSetOfInteger;
class TColStd_ListNodeOfSetListOfSetOfInteger;
class TColStd_ListIteratorOfSetListOfSetOfInteger;



class TColStd_SetOfInteger  {
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

  
  Standard_EXPORT   TColStd_SetOfInteger();
  
        Standard_Integer Extent() const;
  
        Standard_Boolean IsEmpty() const;
  
        void Clear() ;
  
  Standard_EXPORT     Standard_Boolean Add(const Standard_Integer& T) ;
  
  Standard_EXPORT     Standard_Boolean Remove(const Standard_Integer& T) ;
  
  Standard_EXPORT     void Union(const TColStd_SetOfInteger& B) ;
  
  Standard_EXPORT     void Intersection(const TColStd_SetOfInteger& B) ;
  
  Standard_EXPORT     void Difference(const TColStd_SetOfInteger& B) ;
  
  Standard_EXPORT     Standard_Boolean Contains(const Standard_Integer& T) const;
  
  Standard_EXPORT     Standard_Boolean IsASubset(const TColStd_SetOfInteger& S) const;
  
  Standard_EXPORT     Standard_Boolean IsAProperSubset(const TColStd_SetOfInteger& S) const;


friend class TColStd_SetIteratorOfSetOfInteger;



protected:





private:

  
  Standard_EXPORT   TColStd_SetOfInteger(const TColStd_SetOfInteger& Other);


TColStd_SetListOfSetOfInteger myItems;


};

#define Item Standard_Integer
#define Item_hxx <Standard_Integer.hxx>
#define TCollection_SetList TColStd_SetListOfSetOfInteger
#define TCollection_SetList_hxx <TColStd_SetListOfSetOfInteger.hxx>
#define TCollection_ListNodeOfSetList TColStd_ListNodeOfSetListOfSetOfInteger
#define TCollection_ListNodeOfSetList_hxx <TColStd_ListNodeOfSetListOfSetOfInteger.hxx>
#define TCollection_ListIteratorOfSetList TColStd_ListIteratorOfSetListOfSetOfInteger
#define TCollection_ListIteratorOfSetList_hxx <TColStd_ListIteratorOfSetListOfSetOfInteger.hxx>
#define TCollection_ListNodeOfSetList TColStd_ListNodeOfSetListOfSetOfInteger
#define TCollection_ListNodeOfSetList_hxx <TColStd_ListNodeOfSetListOfSetOfInteger.hxx>
#define TCollection_ListIteratorOfSetList TColStd_ListIteratorOfSetListOfSetOfInteger
#define TCollection_ListIteratorOfSetList_hxx <TColStd_ListIteratorOfSetListOfSetOfInteger.hxx>
#define TCollection_SetIterator TColStd_SetIteratorOfSetOfInteger
#define TCollection_SetIterator_hxx <TColStd_SetIteratorOfSetOfInteger.hxx>
#define Handle_TCollection_ListNodeOfSetList Handle_TColStd_ListNodeOfSetListOfSetOfInteger
#define TCollection_ListNodeOfSetList_Type_() TColStd_ListNodeOfSetListOfSetOfInteger_Type_()
#define Handle_TCollection_ListNodeOfSetList Handle_TColStd_ListNodeOfSetListOfSetOfInteger
#define TCollection_ListNodeOfSetList_Type_() TColStd_ListNodeOfSetListOfSetOfInteger_Type_()
#define TCollection_Set TColStd_SetOfInteger
#define TCollection_Set_hxx <TColStd_SetOfInteger.hxx>

#include <TCollection_Set.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_SetList
#undef TCollection_SetList_hxx
#undef TCollection_ListNodeOfSetList
#undef TCollection_ListNodeOfSetList_hxx
#undef TCollection_ListIteratorOfSetList
#undef TCollection_ListIteratorOfSetList_hxx
#undef TCollection_ListNodeOfSetList
#undef TCollection_ListNodeOfSetList_hxx
#undef TCollection_ListIteratorOfSetList
#undef TCollection_ListIteratorOfSetList_hxx
#undef TCollection_SetIterator
#undef TCollection_SetIterator_hxx
#undef Handle_TCollection_ListNodeOfSetList
#undef TCollection_ListNodeOfSetList_Type_
#undef Handle_TCollection_ListNodeOfSetList
#undef TCollection_ListNodeOfSetList_Type_
#undef TCollection_Set
#undef TCollection_Set_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif