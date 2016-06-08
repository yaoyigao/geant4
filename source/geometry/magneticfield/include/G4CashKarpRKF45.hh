// This code implementation is the intellectual property of
// the GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: G4CashKarpRKF45.hh,v 1.3 2000/04/27 09:14:04 gcosmo Exp $
// GEANT4 tag $Name: geant4-02-00 $
//
//
// class G4CashKarpRKF45
//
// Class description:
//
// The Cash-Karp Runge-Kutta-Fehlberg 4/5 method is an embedded fourth
// order method (giving fifth-order accuracy) for the solution of an ODE.
// Two different fourth order estimates are calculated; their difference
// gives an error estimate. [ref. Numerical Recipes in C, 2nd Edition]
// It is used to integrate the equations of the motion of a particle 
// in a magnetic field.

// History:
// - Created. J.Apostolakis, V.Grichine - 30.1.97

#ifndef G4CashKARP_RKF45
#define G4CashKARP_RKF45

#include "G4MagIntegratorStepper.hh"

class G4CashKarpRKF45: public G4MagIntegratorStepper
{

  public:  // with description

    G4CashKarpRKF45(G4Mag_EqRhs *EqRhs, G4int numberOfVariables = 6) ;
   ~G4CashKarpRKF45() ;

    void Stepper( const G4double y[],
		  const G4double dydx[],
		  const G4double h,
			G4double yout[],
			G4double yerr[] ) ;

    void StepWithEst( const G4double yIn[],
		      const G4double dydx[],
		      const G4double Step,
		            G4double yOut[],
                            G4double& alpha2,
			    G4double& beta2,
		      const G4double B1[],
			    G4double B2[]    )  ;  

  public:  // without description

   G4double  DistChord() const = 0 ; // This is not IMPLEMENTED yet. 
                                     //  It must be done before it can work.
   G4int        IntegratorOrder() { return 4 ; };

  private:

   G4int fNumberOfVariables ;
   G4double *ak2, *ak3, *ak4, *ak5, *ak6, *ak7, *yTemp, *yIn;  // scratch space
};

#endif /* G4CashKARP_RKF45 */