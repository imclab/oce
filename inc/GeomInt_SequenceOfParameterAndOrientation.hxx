// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomInt_SequenceOfParameterAndOrientation_HeaderFile
#define _GeomInt_SequenceOfParameterAndOrientation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_GeomInt_SequenceNodeOfSequenceOfParameterAndOrientation_HeaderFile
#include <Handle_GeomInt_SequenceNodeOfSequenceOfParameterAndOrientation.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class GeomInt_ParameterAndOrientation;
class GeomInt_SequenceNodeOfSequenceOfParameterAndOrientation;



class GeomInt_SequenceOfParameterAndOrientation  : public TCollection_BaseSequence {
public:

  DEFINE_STANDARD_ALLOC

  
      GeomInt_SequenceOfParameterAndOrientation();
  
  Standard_EXPORT     void Clear() ;
~GeomInt_SequenceOfParameterAndOrientation()
{
  Clear();
}
  
  Standard_EXPORT    const GeomInt_SequenceOfParameterAndOrientation& Assign(const GeomInt_SequenceOfParameterAndOrientation& Other) ;
   const GeomInt_SequenceOfParameterAndOrientation& operator =(const GeomInt_SequenceOfParameterAndOrientation& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const GeomInt_ParameterAndOrientation& T) ;
  
        void Append(GeomInt_SequenceOfParameterAndOrientation& S) ;
  
  Standard_EXPORT     void Prepend(const GeomInt_ParameterAndOrientation& T) ;
  
        void Prepend(GeomInt_SequenceOfParameterAndOrientation& S) ;
  
        void InsertBefore(const Standard_Integer Index,const GeomInt_ParameterAndOrientation& T) ;
  
        void InsertBefore(const Standard_Integer Index,GeomInt_SequenceOfParameterAndOrientation& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const GeomInt_ParameterAndOrientation& T) ;
  
        void InsertAfter(const Standard_Integer Index,GeomInt_SequenceOfParameterAndOrientation& S) ;
  
  Standard_EXPORT    const GeomInt_ParameterAndOrientation& First() const;
  
  Standard_EXPORT    const GeomInt_ParameterAndOrientation& Last() const;
  
        void Split(const Standard_Integer Index,GeomInt_SequenceOfParameterAndOrientation& Sub) ;
  
  Standard_EXPORT    const GeomInt_ParameterAndOrientation& Value(const Standard_Integer Index) const;
   const GeomInt_ParameterAndOrientation& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const GeomInt_ParameterAndOrientation& I) ;
  
  Standard_EXPORT     GeomInt_ParameterAndOrientation& ChangeValue(const Standard_Integer Index) ;
    GeomInt_ParameterAndOrientation& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   GeomInt_SequenceOfParameterAndOrientation(const GeomInt_SequenceOfParameterAndOrientation& Other);




};

#define SeqItem GeomInt_ParameterAndOrientation
#define SeqItem_hxx <GeomInt_ParameterAndOrientation.hxx>
#define TCollection_SequenceNode GeomInt_SequenceNodeOfSequenceOfParameterAndOrientation
#define TCollection_SequenceNode_hxx <GeomInt_SequenceNodeOfSequenceOfParameterAndOrientation.hxx>
#define Handle_TCollection_SequenceNode Handle_GeomInt_SequenceNodeOfSequenceOfParameterAndOrientation
#define TCollection_SequenceNode_Type_() GeomInt_SequenceNodeOfSequenceOfParameterAndOrientation_Type_()
#define TCollection_Sequence GeomInt_SequenceOfParameterAndOrientation
#define TCollection_Sequence_hxx <GeomInt_SequenceOfParameterAndOrientation.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
