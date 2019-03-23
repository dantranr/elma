#include <iostream>
#include "elmacar.h"
#include "helper.h"

using namespace std;

ElmaCar::ElmaCar() {
	MyAirConditioner = new AirConditioner(this);
	MyHeadlights = new Headlights(this);
	MyRadio = new Radio(this);
	MyBrakes = new Brakes(this);
	MyEngine  = new Engine(this);
	MyWheels = new Wheels(this);
}

void ElmaCarControls::TurnOnAC() {
	MyAirConditioner->TurnOn();
}

void ElmaCarControls::TurnOffAC() {
	MyAirConditioner->TurnOff();
}

void ElmaCarControls::AdjustAC(int amount) {
	MyAirConditioner->SetLevel(amount);
}

void ElmaCarControls::TurnOnHeadlights() {
	MyHeadlights->TurnOn();
}

void ElmaCarControls::TurnOffHeadlights() {
	MyHeadlights->TurnOff();
}

void ElmaCarControls::TurnOnRadio() {
	MyRadio->SetVolume(100);
}

void ElmaCarControls::TurnOffRadio() {
	MyRadio->SetVolume(0);
}

void ElmaCarControls::AdjustRadioVolume(int amount) {
	MyRadio->AdjustVolume(amount);
}

void ElmaCarControls::PressBrake(int amount) {
	MyBrakes->Apply(amount);
}

void ElmaCarControls::StartCar() {
	MyEngine->Start();
}

void ElmaCarControls::StopCar() {
	MyEngine->Stop();
}

void ElmaCarControls::ReleaseGasPedal(int amount) {
	MyEngine->ReleaseGasPedal(amount);
}

void ElmaCarControls::PushGasPedal(int amount) {
	MyEngine->PushGasPedal(amount);
}

int ElmaCarControls::GetSpeed() {
	return MyWheels->Speed;
}


