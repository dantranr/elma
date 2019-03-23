#include <iostream>
#include "helper.h"

using namespace std;

void AirConditioner::TurnOff() {
	ChangedBy = 0 - Level;
	Level = 0;
}

void AirConditioner::SetLevel(int newlevel) {
	Level = newlevel;
	ChangedBy = newlevel - Level;
}

void Wheels::Accelebrate(int amount) {
	Speed += amount;
}

void Wheels::Decelerate(int amount) {
	Speed -= amount;
}

void Engine::Start() {
	RPM = 1000;
}
void Engine::Stop() {
	RPM = 0;
	Revamount = 0;
}

void Engine::PushGasPedal(int amout) {
	Revamount = amount;
	RPM += Revamount;
}

void Engine::ReleaseGasPedal(int amount) {
	Revamount = amount;
	RPM -= Revamount;
}

void Brakes::Apply(int amount) {
	Pressure = amount;
}

void Headlights::Adjust(int amount) {
	Brightness += amount;
}




