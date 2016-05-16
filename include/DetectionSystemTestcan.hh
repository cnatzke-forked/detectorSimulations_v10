//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
//
// $Id: DetectorConstruction.hh,v 1.1 2010-10-18 15:56:17 maire Exp $
// GEANT4 tag $Name: geant4-09-04-patch-02 $
//
//

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#ifndef DetectionSystemTestcan_h
#define DetectionSystemTestcan_h 1

#include "G4SystemOfUnits.hh" // new version geant4.10 requires units
#include "G4VUserDetectorConstruction.hh"
#include "globals.hh"

class G4AssemblyVolume;

class DetectionSystemTestcan
{
public:
    DetectionSystemTestcan(G4double length, G4double radius);
    ~DetectionSystemTestcan();

    G4int Build();
    G4int PlaceDetector(G4LogicalVolume* exp_hall_log);

private:
    // Logical volumes
    G4LogicalVolume* testcan_alum_casing_log;
    G4LogicalVolume* testcan_scintillator_log;   
    G4LogicalVolume* testcan_quartz_window_log;

    // Assembly volumes
    G4AssemblyVolume* assemblyTestcan;                 // Contains all non-sensitive materials

    G4double scintillator_length;
    G4double scintillator_inner_radius;
    G4double scintillator_outer_radius;

    G4double alum_can_thickness;
    G4double quartz_thickness;
    G4double quartz_radius;

    G4double start_phi;
    G4double end_phi;

    G4String can_material;
    G4String liquid_material;
    G4String quartz_material;

    // The colours of the detectors
    G4Colour liquid_colour; // Scintillator colour
    G4Colour grey_colour;   // can colour
    G4Colour quartz_colour;

    G4int BuildTestcan();

};

#endif

