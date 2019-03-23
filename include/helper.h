 #ifndef _HELPER_H
#define _HELPER_H

#include "elmacar.h"

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


class Brakes : public Helper {
protected:
    friend class ElmaCar;
    friend class ElmaCarControls;
    int Pressure;

public:
    Brakes(ElmaCar *elm) : Helper(elm), Pressure(0) {}
    void Apply(int amount);
};

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
