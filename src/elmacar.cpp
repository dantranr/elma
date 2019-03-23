#include <iostream>
#include "elmacar.h"
#include "helper.h"

using namespace std;

//!  A ElmaCar class. 
/*!
  This class start to initialize all the car methods
*/

ElmaCar::ElmaCar() {
	elmaAirConditioner = new AirConditioner(this);
	elmaHeadlights = new Headlights(this);
	elmaRadio = new Radio(this);
	elmaBrakes = new Brakes(this);
	elmaEngine  = new Engine(this);
	elmaWheels = new Wheels(this);
}

//! Turn on AC for Elmacar
//! \return void AC on
void ElmaCarControls::TurnOnAC() {
	elmaAirConditioner->TurnOn();
}

//! Turn off AC for Elmacar
//! \return void AC off
void ElmaCarControls::TurnOffAC() {
	elmaAirConditioner->TurnOff();
}

//! Adjust AC for Elmacar
//! \param amount the value of AC
//! \return void setlevel value
void ElmaCarControls::AdjustAC(int amount) {
	elmaAirConditioner->SetLevel(amount);
}

//! Turn on light for Elmacar
//! \return void lights is on
void ElmaCarControls::TurnOnHeadlights() {
	elmaHeadlights->TurnOn();
}

//! Turn off light for Elmacar
//! \return void lights is off
void ElmaCarControls::TurnOffHeadlights() {
	elmaHeadlights->TurnOff();
}

//! Turn on radio for Elmacar
//! \return void radio is on with set volume to 100
void ElmaCarControls::TurnOnRadio() {
	elmaRadio->SetVolume(100);
}

//! Turn off radio for Elmacar
//! \return void radio is off volume to 0
void ElmaCarControls::TurnOffRadio() {
	elmaRadio->SetVolume(0);
}

//! Adjust radio volume for Elmacar
//! \return the volume value
void ElmaCarControls::AdjustRadioVolume(int amount) {
	elmaRadio->AdjustVolume(amount);
}

//! Press brake function
//! \param amount the value to set to brake
//! \return void apply the brake value to the elmacar
void ElmaCarControls::PressBrake(int amount) {
	elmaBrakes->Apply(amount);
}

//! Start ElmaCar
//! \return the engine is started
void ElmaCarControls::StartCar() {
	elmaEngine->Start();
}
 
//! Stop ElmaCar
//! \return the engine is stopped
void ElmaCarControls::StopCar() {
	elmaEngine->Stop();
}

//! Release gas pedal function
//! \param amount the value to release the pedal
//! \return void apply to the elma car the amount of release the gas pedal
void ElmaCarControls::ReleaseGasPedal(int amount) {
	elmaEngine->ReleaseGasPedal(amount);
}

//! Push gas pedal function
//! \param amount the value to push the pedal
//! \return void apply to the elma car the amount of push the gas pedal
void ElmaCarControls::PushGasPedal(int amount) {
	elmaEngine->PushGasPedal(amount);
}

//! Get speed function
//! \return integer the speed value of ElmaCar
int ElmaCarControls::GetSpeed() {
	return elmaWheels->Speed;
}


