#include <iostream>

#include "elmacar.h"

using namespace elma;
using namespace elmacar;

int main() {
    
    ElmaCar *ElmaCar = new Elmacar();
	
	ElmaCar->ElmaCarEngine->Start();
	std::cout << "Elma Car Engine Started!" << std::endl;
	
	ElmaCar->ElmaCarWheels->Accelebrate(20);
	std::cout << "The car is going: " << ElmaCar->ElmaCarWheels->GetSpeed() << std::endl;
	
    ElmaCar->ElmaCarWheels->Decelebrate(10);
	std::cout << "The car is going: " << ElmaCar->ElmaCarWheels->GetSpeed() << std::endl;
	
	ElmaCar->ElmaCarBrakes->Apply(10);
	std::cout << "Apply the brakes of 10." << std::endl;
	std::cout << "The car is going: " << ElmaCar ->ElmaCarWheels->GetSpeed() << std::endl;
	
    ElmaCar->ElmaCarWheels->Accelebrate(1000);
	std::cout << "The car is going: " << ElmaCar->ElmaCarWheels->GetSpeed() << std::endl;
	
	ElmaCar->ElmaCarBrakes->Apply(100);
	std::cout << "Apply the brakes of 100." << std::endl;
	std::cout << "The car is going: " << ElmaCar ->ElmaCarWheels->GetSpeed() << std::endl;
    
	ElmaCar->ElmaCarEngine->Stop();
	std::cout << "Elma Car Engine Stopped!" << std::endl;

}