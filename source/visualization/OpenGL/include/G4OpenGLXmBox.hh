// This code implementation is the intellectual property of
// the GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: G4OpenGLXmBox.hh,v 1.3 1999/12/15 14:54:05 gunter Exp $
// GEANT4 tag $Name: geant4-02-00 $
//
// 
//Box container class

#ifdef G4VIS_BUILD_OPENGLXM_DRIVER

#ifndef G4OPENGLXMBOX_HH
#define G4OPENGLXMBOX_HH

#include "G4OpenGLXmVWidgetContainer.hh"
#include "globals.hh"
#include <Xm/Frame.h>
#include <Xm/RowColumn.h>

class G4OpenGLXmVWidgetComponent;
class G4OpenGLXmVWidgetShell;

class G4OpenGLXmBox : public G4OpenGLXmVWidgetContainer
{

public:
  G4OpenGLXmBox (char* = NULL,
		 G4bool = False);   //constructor
  ~G4OpenGLXmBox ();  //destructor

  void AddChild (G4OpenGLXmVWidgetComponent*);
  void AddYourselfTo (G4OpenGLXmVWidgetShell*);

  Widget* GetPointerToParent ();
  Widget* GetPointerToWidget ();
  
  char* GetName ();
  void SetName (char*);

protected:
  char* name;
  Widget* parent;
  Widget box_row_col;
  G4bool radio;
};

#endif

#endif