// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Bnd_BoundSortBox2d_HeaderFile
#define _Bnd_BoundSortBox2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Bnd_Box2d_HeaderFile
#include <Bnd_Box2d.hxx>
#endif
#ifndef _Handle_Bnd_HArray1OfBox2d_HeaderFile
#include <Handle_Bnd_HArray1OfBox2d.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfListOfInteger_HeaderFile
#include <Handle_TColStd_HArray1OfListOfInteger.hxx>
#endif
#ifndef _TColStd_DataMapOfIntegerInteger_HeaderFile
#include <TColStd_DataMapOfIntegerInteger.hxx>
#endif
#ifndef _TColStd_ListOfInteger_HeaderFile
#include <TColStd_ListOfInteger.hxx>
#endif
class Bnd_HArray1OfBox2d;
class TColStd_HArray1OfListOfInteger;
class Standard_NullValue;
class Standard_MultiplyDefined;
class Bnd_Box2d;
class TColStd_ListOfInteger;


//! A tool to compare a 2D bounding box with a set of 2D <br>
//! bounding boxes. It sorts the set of bounding boxes to give <br>
//! the list of boxes which intersect the element being compared. <br>
//! The boxes being sorted generally bound a set of shapes, <br>
//! while the box being compared bounds a shape to be <br>
//! compared. The resulting list of intersecting boxes therefore <br>
//! gives the list of items which potentially intersect the shape to be compared. <br>
class Bnd_BoundSortBox2d  {
public:

  DEFINE_STANDARD_ALLOC

  //! Constructs an empty comparison algorithm for 2D bounding boxes. <br>
//! The bounding boxes are then defined using the Initialize function. <br>
  Standard_EXPORT   Bnd_BoundSortBox2d();
  //! Initializes this comparison algorithm with <br>
//! -   the set of 2D bounding boxes SetOfBox <br>
  Standard_EXPORT     void Initialize(const Bnd_Box2d& CompleteBox,const Handle(Bnd_HArray1OfBox2d)& SetOfBox) ;
  //! Initializes this comparison algorithm with <br>
//! -   the set of 2D bounding boxes SetOfBox, where <br>
//!  CompleteBox is given as the global bounding box of   SetOfBox. <br>
  Standard_EXPORT     void Initialize(const Handle(Bnd_HArray1OfBox2d)& SetOfBox) ;
  //! Initializes this comparison algorithm, giving it only <br>
//! -   the maximum number nbComponents, and <br>
//! -   the global bounding box CompleteBox, <br>
//! of the 2D bounding boxes to be managed. Use the Add <br>
//! function to define the array of bounding boxes to be sorted by this algorithm. <br>
  Standard_EXPORT     void Initialize(const Bnd_Box2d& CompleteBox,const Standard_Integer nbComponents) ;
  //! Adds the 2D bounding box theBox at position boxIndex in <br>
//! the array of boxes to be sorted by this comparison algorithm. <br>
//! This function is used only in conjunction with the third <br>
//! syntax described in the synopsis of Initialize. <br>
//! Exceptions <br>
//! -   Standard_OutOfRange if boxIndex is not in the <br>
//!   range [ 1,nbComponents ] where <br>
//!   nbComponents is the maximum number of bounding <br>
//!   boxes declared for this comparison algorithm at <br>
//!   initialization. <br>
//! -   Standard_MultiplyDefined if a box still exists at <br>
//!   position boxIndex in the array of boxes to be sorted by <br>
//!   this comparison algorithm. <br>
  Standard_EXPORT     void Add(const Bnd_Box2d& theBox,const Standard_Integer boxIndex) ;
  
//! Compares the 2D bounding box theBox with the set of <br>
//! bounding boxes to be sorted by this comparison algorithm, <br>
//! and returns the list of intersecting bounding boxes as a list <br>
//! of indexes on the array of bounding boxes used by this algorithm. <br>
  Standard_EXPORT    const TColStd_ListOfInteger& Compare(const Bnd_Box2d& theBox) ;
  
  Standard_EXPORT     void Dump() const;





protected:





private:

  //! Prepares BoundSortBox2d and sorts the rectangles of <br>
//!          <SetOfBox> . <br>
  Standard_EXPORT     void SortBoxes() ;


Bnd_Box2d myBox;
Handle_Bnd_HArray1OfBox2d myBndComponents;
Standard_Real Xmin;
Standard_Real Ymin;
Standard_Real deltaX;
Standard_Real deltaY;
Standard_Integer discrX;
Standard_Integer discrY;
Handle_TColStd_HArray1OfListOfInteger axisX;
Handle_TColStd_HArray1OfListOfInteger axisY;
Standard_Integer theFound;
TColStd_DataMapOfIntegerInteger Crible;
TColStd_ListOfInteger lastResult;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
