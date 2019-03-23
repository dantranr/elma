#ifndef _ELMA_CAR_H
#define _ELMA_CAR_H

#include "elma/elma.h" // Note installation directory for elma
#include "helper.h"
 
//!  A ElmaCar class. 
/*!
  This class start to initialize all the car methods
*/
class ElmaCar {
public:
	Engine *elmaEngine;
	Radio *elmaRadio;
	Wheels *elmaWheels;
	Brakes *elmaBrakes;
	Headlights *elmaHeadlights;
	AirConditioner *elmaAirConditioner;
	ElmaCar();
};

//!  A ElmaCarControls class. 
/*!
  This class included all the methods/functions of the car
*/
class ElmaCarControls : public ElmaCar {
public:
	ElmaCarControls() : ElmaCar() {};
  void TurnOnAC();
	void TurnOffAC();
	void AdjustAC(int amount);
	void TurnOnHeadlights();
	void TurnOffHeadlights();
	void TurnOnRadio();
	void TurnOffRadio();
	void AdjustRadioVolume(int amount);
	void PressBrake(int amount);
	void StartCar();
	void StopCar();
	void PushGasPedal(int amount);
	void ReleaseGasPedal(int amount);
	int GetSpeed();
};

#endif
