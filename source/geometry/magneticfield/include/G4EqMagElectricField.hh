// This code implementation is the intellectual property of
// the GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: G4EqMagElectricField.hh,v 1.3 2000/04/27 09:14:04 gcosmo Exp $
// GEANT4 tag $Name: geant4-02-00 $
//
//
// class G4EqMagElectricField
//
// Class description:
//
// This is the right-hand side of equation of motion in a combined
// electric and magnetic field.

// History:
// - Created. V.Grichine, 10.11.98

#ifndef G4EQMAGELECTRICFIELD_hh
#define G4EQMAGELECTRICFIELD_hh

#include "G4Mag_EqRhs.hh"
#include "G4ElectroMagneticField.hh"

class G4EqMagElectricField : public G4Mag_EqRhs
{
  public:  // with description

    G4EqMagElectricField(G4ElectroMagneticField *emField )
      : G4Mag_EqRhs( emField ) {;}

    ~G4EqMagElectricField() {;} 

    void  SetChargeMomentumMass( const G4double particleCharge, // in e+ units
			         const G4double MomentumXc,
				 const G4double mass);

    void EvaluateRhsGivenB( const  G4double y[],
			    const  G4double Field[],
			           G4double dydx[] ) const;
      // Given the value of the electromagnetic field, this function 
      // calculates the value of the derivative dydx.

  private:

     G4double        fElectroMagCof;
};

#endif