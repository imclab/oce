// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Standard_DivideByZero_HeaderFile
#define _Standard_DivideByZero_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_DefineException_HeaderFile
#include <Standard_DefineException.hxx>
#endif
#ifndef _Standard_SStream_HeaderFile
#include <Standard_SStream.hxx>
#endif

#ifndef _Standard_NumericError_HeaderFile
#include <Standard_NumericError.hxx>
#endif
#ifndef _Handle_Standard_DivideByZero_HeaderFile
#include <Handle_Standard_DivideByZero.hxx>
#endif

#if !defined No_Exception && !defined No_Standard_DivideByZero
#define Standard_DivideByZero_Raise_if(CONDITION,MESSAGE) \
  if (CONDITION) Standard_DivideByZero::Raise(MESSAGE);
#else
#define Standard_DivideByZero_Raise_if(CONDITION,MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(Standard_DivideByZero,Standard_NumericError)

#endif
