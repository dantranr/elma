#ifndef _ELMA_CAR_H
#define _ELMA_CAR_H

#include "elma/elma.h" // Note installation directory for elma
#include "helper.h"

class ElmaCar {
public:
	Engine *MyEngine;
	Radio *MyRadio;
	Wheels *MyWheels;
	Brakes *MyBrakes;
	Headlights *MyHeadlights;
	AirConditioner *MyAirConditioner;
	ElmaCar();
};

class ElmaCarControls : public ElmaCar {
public:
	void StartCar();
	void StopCar();
	void PushGasPedal(int amount);
	void ReleaseGasPedal(int amount);
	void PressBrake(int amount);
	void TurnOnRadio();
	void TurnOffRadio();
	void AdjustRadioVolume(int amount);
	void TurnOnHeadlights();
	void TurnOffHeadlights();
	void TurnOnAC();
	void TurnOffAC();
	void AdjustAC(int amount);
	int GetSpeed();
	ElmaCarControls() : ElmaCar() {};
};

#endif
