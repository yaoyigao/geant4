//
// ********************************************************************
// * DISCLAIMER                                                       *
// *                                                                  *
// * The following disclaimer summarizes all the specific disclaimers *
// * of contributors to this software. The specific disclaimers,which *
// * govern, are listed with their locations in:                      *
// *   http://cern.ch/geant4/license                                  *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.                                                             *
// *                                                                  *
// * This  code  implementation is the  intellectual property  of the *
// * GEANT4 collaboration.                                            *
// * By copying,  distributing  or modifying the Program (or any work *
// * based  on  the Program)  you indicate  your  acceptance of  this *
// * statement, and all its terms.                                    *
// ********************************************************************
//
//
// $Id: G4JasSystem.hh,v 1.8.4.1 2001/06/28 19:07:46 gunter Exp $
// GEANT4 tag $Name:  $
//
// 
// Guy Barrand 14 September 2000

#ifndef G4JASSYSTEM_H
#define G4JASSYSTEM_H

#if defined(G4ANALYSIS_BUILD_JAS) || defined(G4ANALYSIS_USE_JAS)

#include "G4VAnalysisSystem.hh"

class IHistogramManager;
class JasHistogramFactory;

class G4JasSystem : public G4VAnalysisSystem {
public: // I methods :
  virtual const G4String& GetName() const;
  virtual IHistogramFactory* GetHistogramFactory();
  //
  virtual void Store(IHistogram* = 0,const G4String& = "");
  virtual void Plot(IHistogram*);
public:
  G4JasSystem(const G4String& name = "jas");
  virtual ~G4JasSystem();
private:
  G4String fName;
  JasHistogramFactory* fHistogramFactory;
};

#endif

#endif
