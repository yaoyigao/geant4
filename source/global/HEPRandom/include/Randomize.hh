// This code implementation is the intellectual property of
// the GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: Randomize.hh,v 1.4 2000/08/02 15:21:19 gcosmo Exp $
// GEANT4 tag $Name: global-V02-00-02r $
//
#ifndef randomize_h
#define randomize_h 1

#include <CLHEP/Random/Randomize.h>

// Additional distributions ...
//
#include <CLHEP/Random/RandGaussQ.h>
#include <CLHEP/Random/RandGaussT.h>
#include <CLHEP/Random/RandPoissonQ.h>
#include <CLHEP/Random/RandPoissonT.h>
#include <CLHEP/Random/RandLandau.h>
#include <CLHEP/Random/RandBit.h>

#define G4RandGauss RandGaussQ
#define G4UniformRand() HepRandom::getTheEngine()->flat()

#endif // randomize_h 