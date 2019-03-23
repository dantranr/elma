#include <iostream>
#include "elmacar.h"
#include "helper.h"

using namespace std;

ElmaCar::ElmaCar() {
	MyEngine  = new Engine(this);
	MyElectric  = new Electric(this);
	MyRadio = new Radio(this);
	MyWheels = new Wheels(this);
	MyBrakes = new Brakes(this);
	MyHeadlights = new Headlights(this);
	MyAirConditioner = new AirConditioner(this);
	MyRoad = new Road(this);
}

void CarControls::StartCar() {
	MyEngine->Start();
}

void CarControls::StopCar() {
	MyEngine->Stop();
}

void CarControls::PushGasPedal(int amount) {
	MyEngine->PushGasPedal(amount);
}

void CarControls::ReleaseGasPedal(int amount) {
	MyEngine->ReleaseGasPedal(amount);
}

void CarControls::PressBrake(int amount) {
	MyBrakes->Apply(amount);
}


void CarControls::TurnOnRadio() {
	MyRadio->SetVolume(100);
}

void CarControls::TurnOffRadio() {
	MyRadio->SetVolume(0);
}

void CarControls::AdjustRadioVolume(int amount) {
	MyRadio->AdjustVolume(amount);
}

void CarControls::TurnOnHeadlights() {
	MyHeadlights->TurnOn();
}

void CarControls::TurnOffHeadlights() {
	MyHeadlights->TurnOff();
}

void CarControls::ClimbHill(int angle) {
	MyRoad->ClimbDescend(angle);
}

void CarControls::DescendHill(int angle) {
	MyRoad->ClimbDescend(0 - angle);
}

int CarControls::GetSpeed() {
	return MyWheels->Speed;
}

void CarControls::TurnOnAC() {
	MyAirConditioner->TurnOn();
}

void CarControls::TurnOffAC() {
	MyAirConditioner->TurnOff();
}

void CarControls::AdjustAC(int amount) {
	MyAirConditioner->SetLevel(amount);
}


int main() {
	ElmaCar *MyCar = new ElmaCar();
	
	MyCar->MyEngine->Start();
	std::cout << "Engine Started!" << std::endl;
	
	MyCar->MyWheels->Accelebrate(20);
	std::cout << "The car is going: " << MyCar ->MyWheels->GetSpeed() << std::endl;
	
	MyCar->MyBrakes->Apply(20);
	std::cout << "Apply the brakes." << std::endl;
	std::cout << "The car is going: " << MyCar ->MyWheels->GetSpeed() << std::endl;
	
	MyCar->MyBrakes->Apply(80);
	std::cout << "Apply the brakes." << std::endl;
	std::cout << "The car is going: " << MyCar ->MyWheels->GetSpeed() << std::endl;
	
	MyCar->MyEngine->Stop();
	std::cout << "Engine Stoped!" << std::endl;
}