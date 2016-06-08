// This code implementation is the intellectual property of
// the GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: G4Axis2Placement2dCreator.hh,v 1.2 2000/01/21 13:45:08 gcosmo Exp $
// GEANT4 tag $Name: geant4-02-00 $
//
// ----------------------------------------------------------------------
// Class G4Axis2Placement2dCreator
//
// Class description:
//
//

// Authors: J.Sulkimo, P.Urban.
// Revisions by: L.Broglia, G.Cosmo.
//
// History:
//   18-Nov-1999: First step of re-engineering - G.Cosmo
// ----------------------------------------------------------------------
#ifndef G4AXIS2PLACEMENT2DCREATOR_HH
#define G4AXIS2PLACEMENT2DCREATOR_HH

#include "G4GeometryCreator.hh"

class G4Axis2Placement2dCreator: private G4GeometryCreator 
{
  public:
  
  // Constructor & destructor
    G4Axis2Placement2dCreator();
    ~G4Axis2Placement2dCreator();

  // Member functions

    void CreateG4Geometry(STEPentity&);
    void CreateSTEPGeometry(void* G4obj);
    G4String Name() { return "Axis2_Placement_2d"; }
    static G4Axis2Placement2dCreator GetInstance() { return csc; }

  //Members

  private:

    static G4Axis2Placement2dCreator csc;
};

#endif