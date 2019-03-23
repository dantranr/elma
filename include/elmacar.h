#ifndef _ELMA_CAR_H
#define _ELMA_CAR_H

#include "elma/elma.h" // Note installation directory for elma
#include "helper.h"

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
