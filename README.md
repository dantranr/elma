Elma Final Project
===

Goal
===
Extend the Elma car to use a more realistic simulation of a car's velocity including Radio, brakes, engine, headlights, air conditioning, and a driver that can change gears, speed up, slow down, and stop. 

Info
===
This project is based on the [Elma](http://klavinslab.org/elma), an event loop manager for embedded and reactive systems. It keeps track of processes, finite state machines, events, and communication channels, executing them at specified frequencies. 
More information on how Elma was designed can be found in the links below:
- [Event loop management](https://github.com/klavins/ECEP520/tree/master/week_6)
- [Events and finite state machines](https://github.com/klavins/ECEP520/tree/master/week_7)
- [HTTP in event loops](https://github.com/klavins/ECEP520/blob/master/week_8)


Milestones
===

|Milestone                                          | Target Date   | Status    | Completion Date|
|:---                                               | :---:         | :---:     |   :---:        |
|1. Making new repo start as a fork of Elma_Project |03.15.19       |Completed  |   03.21.19     |
|2. Update code library for Car                     |03.18.19       |Completed  |   03.22.19     |
|3. Build an example or two to show it works        |03.18.19       |Completed  |   03.22.19     |
|4. Test Car working                                |03.22.19       |IP  |   03.22.19     |
|5. Complete the API documentation                  |03.22.19       |IP  |   03.23.19     |
|6. Complete final project                          |03.22.19       |IP  |   03.23.19     |


Installation
===

Terminal
---

    git clone https://github.com/dantranr/elma.git
    cd elma
    docker run -v $PWD:/source -it klavins/elma:latest bash
    make


Execution
---
To run the project, type
    bin/elmacar


Architecture
===

As new to C++, I designed this ElmaCar project as simple as possible, to demonstrate the knowledge I gained after taking the class. The project was designed as the ElmaCar is the main control the car. It had all the functions included in the helper file that can turn on and off radio, the lights, air conditioning; the engine when it turned on, it can control the brake to stop the car, the wheel to accelebrate or decelebrate the car. 

![Design][design]

[design]: https://github.com/dantranr/elma/blob/master/images/design.png "Elma Car design"

Design figure can be found [here](https://github.com/dantranr/elma/blob/master/images/design.png) 
images/design.png


Air Conditioner
---
The ElmaCar is able to turn on or off the AC. It can also manually set the level.
```c++
    void TurnOn();
    void TurnOff();
    bool GetLevel();
    void SetLevel(int level);
```

Engine
---
The Engine function is to start and stop the car. The push gas pedal will accelebrate the car and release gas pedal will decelebrate it. The amount of start is unlimited, with any amout, it will stop when the amount set to 0.

```c++
    void Start();
    void PushGasPedal(int amount);
    void ReleaseGasPedal(int amount);
    void Stop();
```

Brake
---
The ElmaCar can Apply the brake to stop the car (amount of 0)

```c++
    void Apply(int amount);
```

Headlights
---
The Headlights function are able to turn on and off the light with the Brightness amount set to 100 and 0 accordingly. It also can adjust the light when we put the amount in to it. 

```c++
    void TurnOn() { Brightness = 100; }
    void TurnOff() { Brightness = 0; }
    void Adjust (int amount);
    int GetBrightness();
```


Radio
---
The radio can be adjusted with the volume on and off depending on the amount volume that we design it to.  

```c++
    void AdjustVolume(int amount) { Volume += amount; }
    void SetVolume(int amount) { Volume = amount; }
    int GetVolume() { return Volume;}
};

```


Results
===

When running the bin/elmacar, it will printout the output to tell us when the car started, stopped, accelebrated, decelebrated, braked, and etc... To test the code working, I manually update the main.cc file to get the speed or volume amount, or AC amount. 

Test
---

Add the code below to main.cc

```c++
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

```

Output result

![Test][test1]

[test1]: https://github.com/dantranr/elma/blob/master/images/test_output1.png "Elma Car test result"


Enhancement 
---
1. Add UDP messages for the elma that can send message back and forth the information about the Car 
1. Update the car to be able to change gear with diffent amount of gas pedal pressed
1. Update the road condition and automate the car to follow the road
1. Test on real car instead of simulation
1. Adding camera to collect the real time


Acknowledgements
---
Got helps from TA to answer the C++ coding questions and debugging my code. 


References
---
To get my code working, I used the helps from internet and the Book "C++ All-In-One Desk Reference For Dummies"

[Dependency Injection in C++](https://vladris.com/blog/2016/07/06/dependency-injection-in-c.html)

[cplusplus beginner](http://www.cplusplus.com/forum/beginner/216417/)

[C++ All-In-One Desk Reference For Dummies](https://www.amazon.com/All-One-Desk-Reference-Dummies/dp/0470317353)



