// Copyright (c) 1998-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and / or modify it
// under the terms of the GNU Lesser General Public version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

//============================================================================
//==== Titre: Standard_Character.hxx
//==== Role : The header file of primitve type "Character" from package 
//====        "Standard"
//==== 
//==== Implementation:  This is a primitive type implemented as typedef
//====        typedef char Standard_Character
//============================================================================

#ifndef _Standard_Character_HeaderFile
#define _Standard_Character_HeaderFile

#ifndef _Standard_ctype_HeaderFile
#include <Standard_ctype.hxx>
#endif

#include <string.h>

#ifndef _Standard_TypeDef_HeaderFile
#include <Standard_TypeDef.hxx>
#endif

class Handle_Standard_Type;

__Standard_API const Handle_Standard_Type& Standard_Character_Type_();

//class Standard_OStream;
//void ShallowDump (const Standard_Character, Standard_OStream& );
// =====================================
// Method implemented in Standard_Character.cxx
// =====================================
__Standard_API Standard_Integer   HashCode(const Standard_Character, const Standard_Integer);

// ===============================================
// Methods from Standard_Entity class which are redefined:  
//    - Hascode
//    - IsEqual
//    - IsSimilar
//    - Shallowcopy
//    - ShallowDump
// ===============================================

// ===============
// inline methods 
// ===============

// ------------------------------------------------------------------
// IsEqual : Returns Standard_True if two characters have the same value
// ------------------------------------------------------------------
inline Standard_Boolean IsEqual(const Standard_Character One,
				const Standard_Character Two)
{ return One == Two; }

// ------------------------------------------------------------------
// IsSimilar : Returns Standard_True if two characters have the same value
// ------------------------------------------------------------------
inline Standard_Boolean IsSimilar(const Standard_Character One, 
				  const Standard_Character Two)
{ return One == Two; }

// ===============================================
// Character classification functions
//
// NOTE: Character classification routines in C standard library 
// (isdigit(), isalpha() etc.) have integer argument instead of char. 
// Therefore if character from extended Ascii part of char table
// (i.e. above 128) is passed into such functions it is converted 
// to int giving negative value (if characters are signed that
// is default for most compilers). 
// It can be dangerous since implementation of these C functions
// may use argument as index in the array without any checks 
// (for instance, in Microsoft VC++ -- see MSDN)
// To avoid this, we cast char to unsigned char when passing to these functions.
// ===============================================
  
// ==================================================================
// IsAlphabetic : Returns Standard_True if a character is alphabetic
// ==================================================================
inline Standard_Boolean IsAlphabetic(const Standard_Character me) 
{ return 0 != isalpha((unsigned char)me); }

// ==================================================================
// IsDigit : Returns Standard_True if a character is a digit
// ==================================================================
inline Standard_Boolean IsDigit(const Standard_Character me) 
{ return 0 != isdigit((unsigned char)me); }

// ==================================================================
// IsXDigit : Returns Standard_True if a character is a digit
// ==================================================================
inline Standard_Boolean IsXDigit(const Standard_Character me) 
{ return 0 != isxdigit((unsigned char)me); }

// ==================================================================
// IsAlphanumeric : Returns Standard_True if a character is alphanumeric
// ==================================================================
inline Standard_Boolean IsAlphanumeric(const Standard_Character me) 
{ return (IsAlphabetic(me) || IsDigit(me)) ; }

// ==================================================================
// IsControl : Returns Standard_True if a character  is a control character
// ==================================================================
inline Standard_Boolean IsControl(const Standard_Character me) 
{ return 0 != iscntrl((unsigned char)me); }


// ==================================================================
// IsGraphic : Returns Standard_True if a character is graphic
// ==================================================================
inline Standard_Boolean IsGraphic(const Standard_Character me) 
{ return 0 != isgraph((unsigned char)me); }

// ==================================================================
// IsLowerCase : Returns Standard_True if a character is lowercase
// ==================================================================
inline Standard_Boolean IsLowerCase(const Standard_Character me) 
{ return 0 != islower((unsigned char)me); }

// ==================================================================
// IsPrintable : Returns Standard_True if a character is printable
// ==================================================================
inline Standard_Boolean IsPrintable(const Standard_Character me) 
{ return 0 != isprint((unsigned char)me); }

// ==================================================================
// IsPunctuation : Returns Standard_True if a character is a graphic and 
//                 not a alphanumeric character
// ==================================================================
inline Standard_Boolean IsPunctuation(const Standard_Character me) 
{ return ( IsGraphic(me) && !IsAlphanumeric(me)); }

// ==================================================================
// IsSpace : Returns Standard_True if a character is a space
// ==================================================================
inline Standard_Boolean IsSpace(const Standard_Character me) 
{ return 0 != isspace((unsigned char)me); }

// ==================================================================
// IsUppercase : Returns Standard_True if a character is uppercase
// ==================================================================
inline Standard_Boolean IsUpperCase(const Standard_Character me) 
{ return 0 != isupper((unsigned char)me); }

// ==================================================================
// LowerCase : Returns a lowercase character
// ==================================================================
inline Standard_Character LowerCase(const Standard_Character me) 
{ return (Standard_Character)(unsigned char)tolower(me); }

// ==================================================================
// UpperCase : Returns a uppercase character
// ==================================================================
inline Standard_Character UpperCase(const Standard_Character me) 
{ return (Standard_Character)(unsigned char)toupper(me); }

// ------------------------------------------------------------------
// ShallowCopy : Make a copy of one Character
// ------------------------------------------------------------------
inline Standard_Character ShallowCopy (const Standard_Character me) 
{ return me; }

#endif














