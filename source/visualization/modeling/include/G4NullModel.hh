// This code implementation is the intellectual property of
// the GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: G4NullModel.hh,v 1.4 1999/12/15 14:54:30 gunter Exp $
// GEANT4 tag $Name: geant4-02-00 $
//
// 
// John Allison  4th April 1998.
// Null model - simply a holder for modeling parameter.
// DO NOT INVOKE DescribeYourself.

#ifndef G4NULLMODEL_HH
#define G4NULLMODEL_HH

#include "G4VModel.hh"

class G4NullModel: public G4VModel {

public:

  G4NullModel (const G4ModelingParameters* = 0);

  virtual ~G4NullModel ();

  void DescribeYourselfTo (G4VGraphicsScene&);
  // An exception is thrown if this is called!!!!!!!!!!!!!!!!!!!!

  G4bool Validate ();
  // Validate, but allow internal changes (hence non-const function).

  /////////////////////////////////////////////////
  // Access to other information: use GetModelingParameters()
  // (inherited from G4VModel) and the access functions of
  // G4ModelingParameters.

};

#endif