#include <iostream>
#include "carparts.h"

using namespace std;

void Helper::Changed() {
	elmacar->PartChanged(this);
}

void Engine::Start() {
	RPM = 1000;
	Changed();
}

void Engine::PushGasPedal(int amout) {
	Revamount = amount;
	RPM += Revamount;
	Changed();
}

void Engine::ReleaseGasPedal(int amount) {
	Revamount = amount;
	RPM -= Revamount;
	Changed();
}

void Engine::Stop() {
	RPM = 0;
	Revamount = 0;
	Changed();
}

void Electric::ChangeOutputBy(int mount) {
	output += amount;
	ChangedBy = amount;
	Changed();
}

void Wheels::Accelebrate(int amount) {
	Speed += amount;
	Changed();
}

void Wheels::Decelerate(int amount) {
	Speed -= amount;
	Changed();
}

void Brakes::Apply(int amount) {
	Pressure = amount;
	Changed();
}

void Headlights::Adjust(int amount) {
	Brightness += amount;
}

void AirConditioner::TurnOff() {
	ChangedBy = 0 - Level;
	Level = 0;
	Changed();
}

void AirConditioner::SetLevel(int newlevel) {
	Level = newlevel;
	ChangedBy = newlevel - Level;
	Changed();
}

void Road::ClimbDescend(int angle) {
	ClimbAngle = angle;
	Changed();
}

void Road::Bump(int height, int which) {
	BumpHeight = height;
	BumpWhichTire = which;
	Changed();
}

