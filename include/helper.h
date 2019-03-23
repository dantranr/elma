 #ifndef CARPARTS_H_INCLUDED
#define CARPARTS_H_INCLUDED

#include "elmacar.h"

class CarControls;

class CarPart {
protected:
    ElmaCar *elmacar;
    CarPart(ElmaCar *elm) : elmacar(elm) {}
    void Changed();
};

class Engine : public CarPart {
protected:
    friend class ElmaCar;
    friend class CarControls;
    int RPM;
    int Revamount;

public:
    Engine(ElmaCar *elm) : CarPart(elm), 
		RPM(0), Revamount(0) {}
    void Start();
    void PushGasPedal(int amount);
    void ReleaseGasPedal(int amount);
    void Stop();
};

class Radio : public CarPart {
protected:
    friend class ElmaCar;
    friend class CarControls;
    int Volume;

public:
    Radio(ElmaCar *elm) : CarPart(elm), Volume(0) {}
    void AdjustVolume(int amount) { Volume += amount; }
    void SetVolume(int amount) { Volume = amount; }
    int GetVolume() { return Volume;}
};

class Wheels : public CarPart {
protected:
    friend class ElmaCar;
    friend class CarControls;
    int Speed;

public:
    Wheels(ElmaCar *elm) : CarPart(elm), Speed(0) {}
    int GetSpeed() { return Speed; }
    void Accelebrate(int amount);
    void Decelebrate(int amount);
};

class Brakes : public CarPart {
protected:
    friend class ElmaCar;
    friend class CarControls;
    int Pressure;

public:
    Brakes(ElmaCar *elm) : CarPart(elm), Pressure(0) {}
    void Apply(int amount);
};

class Headlights : public CarPart {
protected:
    friend class ElmaCar; 
    friend class CarControls;
    int Brightness;

public:
    Headlights(ElmaCar *elm) : CarPart(elm), Brightness(0) {}
    void TurnOn() { Brightness = 100; }
    void TurnOff() { Brightness = 0; }
    void Adjust (int amount);
    int GetBrightness() { return Brightness;}
};

class AirConditioner : public CarPart {
protected:
    friend class ElmaCar;
    friend class CarControls;
    int Level;
    int ChangedBy;
    
public:
    AirConditioner(ElmaCar *elm) : CarPart(elm), Level(0), ChangedBy() {}
    void TurnOn();
    void TurnOff();
    bool GetLevel() { return Level; }
    void SetLevel(int level);
};

#endif
