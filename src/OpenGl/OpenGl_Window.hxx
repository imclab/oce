// Created on: 2011-09-20
// Created by: Sergey ZERCHANINOV
// Copyright (c) 2011-2014 OPEN CASCADE SAS
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

#ifndef _OpenGl_Window_Header
#define _OpenGl_Window_Header

#include <OpenGl_GlCore11.hxx>
#include <InterfaceGraphic_Aspect.hxx>
#include <OpenGl_Caps.hxx>

#include <Handle_OpenGl_Context.hxx>
#include <Handle_OpenGl_Display.hxx>
#include <Handle_OpenGl_Window.hxx>

#include <MMgt_TShared.hxx>

//! This class represents low-level wrapper over window with GL context.
//! The window itself should be provided to constructor.
class OpenGl_Window : public MMgt_TShared
{
public:

  //! Main constructor - prepare GL context for specified window.
  OpenGl_Window (const Handle(OpenGl_Display)& theDisplay,
                 const CALL_DEF_WINDOW&        theCWindow,
                 Aspect_RenderingContext       theGContext,
                 const Handle(OpenGl_Caps)&    theCaps,
                 const Handle(OpenGl_Context)& theShareCtx);

  //! Destructor
  virtual ~OpenGl_Window();

  //! Resizes the window.
  void Resize (const CALL_DEF_WINDOW& theCWindow);

  //! Reads depth component for current scene into specified buffer.
  void ReadDepths (const Standard_Integer theX,     const Standard_Integer theY,
                   const Standard_Integer theWidth, const Standard_Integer theHeight,
                   float* theDepths);

  void SetBackgroundColor (const Standard_ShortReal theR,
                           const Standard_ShortReal theG,
                           const Standard_ShortReal theB);

  void EnablePolygonOffset() const;
  void DisablePolygonOffset() const;

  Standard_Integer Width()  const { return myWidth; }
  Standard_Integer Height() const { return myHeight; }
  const TEL_COLOUR& BackgroundColor() const { return myBgColor; }
  Standard_Boolean Dither()     const { return myDither; }
  Standard_Boolean BackDither() const { return myBackDither; }

  const Handle(OpenGl_Display)& GetDisplay() const { return myDisplay; }

  const Handle(OpenGl_Context)& GetGlContext() const { return myGlContext; }

  //! This method will be removed in future version!
  GLCONTEXT GetGContext() const;

protected:

  //! Activates GL context and setup viewport.
  void Init();

  //! Makes GL context for this window active in current thread
  virtual Standard_Boolean Activate();

  void EnableFeatures() const;
  void DisableFeatures() const;

  //! Draw directly to the FRONT buffer. Can cause artifacts on the screen.
  void MakeFrontBufCurrent() const;

  //! Draw to BACK buffer. Normal and default state.
  void MakeBackBufCurrent() const;

  //! Draw simultaneously to BACK and FRONT buffers. Abnormal usage.
  void MakeFrontAndBackBufCurrent() const;

protected:

  Handle(OpenGl_Display) myDisplay;
  Handle(OpenGl_Context) myGlContext;
  Standard_Boolean       myOwnGContext; //!< set to TRUE if GL context was not created by this class
#if (defined(_WIN32) || defined(__WIN32__))
  BOOL                   mySysPalInUse;
#endif

  Standard_Integer       myWidth;       // WSWidth
  Standard_Integer       myHeight;      // WSHeight
  TEL_COLOUR             myBgColor;     // WSBackground
  Standard_Boolean       myDither;
  Standard_Boolean       myBackDither;

public:

  DEFINE_STANDARD_RTTI(OpenGl_Window) // Type definition
  DEFINE_STANDARD_ALLOC

};

#endif //_OpenGl_Window_Header
