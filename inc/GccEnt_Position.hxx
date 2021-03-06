// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GccEnt_Position_HeaderFile
#define _GccEnt_Position_HeaderFile


//! Qualifies the position of a solution of a construction <br>
//! algorithm with respect to one of its arguments. This is one of the following: <br>
//! -   GccEnt_unqualified: the position of the solution <br>
//!   is undefined with respect to the argument, <br>
//! -   GccEnt_enclosing: the solution encompasses the argument, <br>
//! -   GccEnt_enclosed: the solution is encompassed by the argument, <br>
//! -   GccEnt_outside: the solution and the argument <br>
//!   are external to one another, <br>
//! -   GccEnt_noqualifier: the value returned during a <br>
//!   consultation of the qualifier when the argument is <br>
//!   defined as GccEnt_unqualified. <br>
//! Note: the interior of a line or any open curve is <br>
//! defined as the left-hand side of the line or curve in <br>
//! relation to its orientation. <br>
enum GccEnt_Position {
GccEnt_unqualified,
GccEnt_enclosing,
GccEnt_enclosed,
GccEnt_outside,
GccEnt_noqualifier
};

#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif

#endif
