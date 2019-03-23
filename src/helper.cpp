#include <iostream>
#include "helper.h"

using namespace std;

//! Air Conditioner turn off function
//! \return void to set the air conditioner level to 0
void AirConditioner::TurnOff() {
	ChangedBy = 0 - Level;
	Level = 0;
}
 
//! Set level for the Air Conditioner
//! \return void set the level air conditioner
void AirConditioner::SetLevel(int newlevel) {
	Level = newlevel;
	ChangedBy = newlevel - Level;
}

//! Accelebrate Elma car
//! \param amount the amount to accelebrate the car
//! \return void set the car speed to add in the amount accelebrated
void Wheels::Accelebrate(int amount) {
	Speed += amount;
}

//! Decelebrate Elma car
//! \param amount the amount to decelebrate the car
//! \return void sustract the amount from the current speed
void Wheels::Decelerate(int amount) {
	Speed -= amount;
}

//! Start Elma car
//! \return void set the car speed to 100
void Engine::Start() {
	RPM = 100;
}

//! Stop Elma car
//! \return void set the car speed to 0
void Engine::Stop() {
	RPM = 0;
	Revamount = 0;
}

//! Push gas pedal Elma car
//! \param amount the speed to add to elma car
//! \return void add to the car speed the amount
void Engine::PushGasPedal(int amount) {
	Revamount = amount;
	RPM += Revamount;
}

//! Release gas pedal Elma car
//! \param amount the speed to substract to elma car
//! \return void substract to the car speed the amount
void Engine::ReleaseGasPedal(int amount) {
	Revamount = amount;
	RPM -= Revamount;
}

//! Brake Elma car
//! \param amount the speed apply to brake
//! \return void set the pressure the amount to brake
void Brakes::Apply(int amount) {
	Pressure = amount;
}

//! Adjust lights for the car
//! \param amount the brightness to adjust
//! \return void add the amount of brightness to current headlight value
void Headlights::Adjust(int amount) {
	Brightness += amount;
}




