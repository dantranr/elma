 #ifndef _HELPER_H
#define _HELPER_H

#include "elmacar.h"

//! AirConditioner that can turn on, turn off, get AC level, and set AC level
//! @code
//!    ElmaCar *ElmaCar = new Elmacar();
//!    ElmaCar->ElmaCarControls->TurnOnAC()
//!    ElmaCar->ElmaCarControls->GetLevel()
//! @endcode
class AirConditioner : public Helper {
protected:
    friend class ElmaCar;
    friend class ElmaCarControls;
    int Level;
    int ChangedBy;
    
public:
    AirConditioner(ElmaCar *elm) : Helper(elm), Level(0), ChangedBy() {}
    void TurnOn();
    void TurnOff();
    bool GetLevel() { return Level; }
    void SetLevel(int level);
};

//! Engine that can start, stop, adjust the pedal speed
//! @code
//!    ElmaCar *ElmaCar = new Elmacar();
//!    ElmaCar->ElmaCarEngine->Start();
//!    ElmaCar->ElmaCarEngine->Stop();
//!    ElmaCar->ElmaCarEngine->PushGasPedal(10);
//!    ElmaCar->ElmaCarEngine->ReleaseGasPedal(5);
//! @endcode
class Engine : public Helper {
protected:
    friend class ElmaCar;
    friend class ElmaCarControls;
    int RPM;
    int Revamount;

public:
    Engine(ElmaCar *elm) : Helper(elm), 
		RPM(0), Revamount(0) {}
    void Start();
    void PushGasPedal(int amount);
    void ReleaseGasPedal(int amount);
    void Stop();
};

//! Brakes that can apply the value to the car's speed
//! @code
//!    ElmaCar *ElmaCar = new Elmacar();
//!    ElmaCar->ElmaCarEngine->Start();
//!    ElmaCar->ElmaCarBrakes->Apply(10);
//! @endcode
class Brakes : public Helper {
protected:
    friend class ElmaCar;
    friend class ElmaCarControls;
    int Pressure;

public:
    Brakes(ElmaCar *elm) : Helper(elm), Pressure(0) {}
    void Apply(int amount);
};

//! Wheels that can accelebrate, decelebrate, and get speed
//! @code
//!    ElmaCar *ElmaCar = new Elmacar();
//!    ElmaCar->ElmaCarEngine->Start();
//!    ElmaCar->ElmaCarWheels->Accelebrate(20);
//!    ElmaCar->ElmaCarWheels->Decelebrate(20);
//!    ElmaCar ->ElmaCarWheels->GetSpeed() 
//! @endcode
class Wheels : public Helper {
protected:
    friend class ElmaCar;
    friend class ElmaCarControls;
    int Speed;

public:
    Wheels(ElmaCar *elm) : Helper(elm), Speed(0) {}
    int GetSpeed() { return Speed; }
    void Accelebrate(int amount);
    void Decelebrate(int amount);
};

//! Headlights turn on, off, and adjust the brightness
//! @code
//!    ElmaCar *ElmaCar = new Elmacar();
//!    ElmaCar->ElmaCarEngine->Start();
//!    ElmaCar->ElmaCarHeadlights->TurnOn();
//!    ElmaCar->ElmaCarHeadlights->TurnOff();
//!    ElmaCar->ElmaCarHeadlights->Adjust(10);
//!    ElmaCar->ElmaCarHeadlights->GetBrightness();
//! @endcode
class Headlights : public Helper {
protected:
    friend class ElmaCar; 
    friend class ElmaCarControls;
    int Brightness;

public:
    Headlights(ElmaCar *elm) : Helper(elm), Brightness(0) {}
    void TurnOn() { Brightness = 100; }
    void TurnOff() { Brightness = 0; }
    void Adjust (int amount);
    int GetBrightness() { return Brightness;}
};

//! Radio set and adjust the volume
//! @code
//!    ElmaCar *ElmaCar = new Elmacar();
//!    ElmaCar->ElmaCarEngine->Start();
//!    ElmaCar->ElmaCarControls->SetVolume(100);
//!    ElmaCar->ElmaCarControls->AdjustVolume(-50);
//!    ElmaCar->ElmaCarControls->GetVolume();
//! @endcode
class Radio : public Helper {
protected:
    friend class ElmaCar;
    friend class ElmaCarControls;
    int Volume;

public:
    Radio(ElmaCar *elm) : Helper(elm), Volume(0) {}
    void AdjustVolume(int amount) { Volume += amount; }
    void SetVolume(int amount) { Volume = amount; }
    int GetVolume() { return Volume;}
};


#endif
