Elma Final Project
===

Goal
===
Extend the Elma car to use a more realistic simulation of a car's velocity including Radio, brakes, engine, headlighs, air conditioning, and a driver that can change gears, speed up, slow down, and stop. 

Design
===

![Design][design]

[design]: https://github.com/dantranr/elma/blob/master/images/design.png "Elma Car design"

Design can be found [here](https://github.com/dantranr/elma/blob/master/images/design.png) 
images/design.png

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
|1. Making new repo start as a fork of Elma_Project |03.15.19       |Completed  | 03.21.19       |
|2. Update code library for Car                     |03.18.19       |In Progress|   TBD          |
|3. Build an example or two to show it works        |03.18.19       |In Progress|   TBD          |
|4. Test Car working                                |03.22.19       | :---:     |   :---:        |
|5. Complete the API documentation                  |03.22.19       | :---:     |   :---:        |
|6. Complete final project                          |03.22.19       | :---:     |   :---:        |


Installation
---

    git clone https://github.com/dantranr/elma.git
    cd elma
    docker run -v $PWD:/source -it klavins/elma:latest bash
    make
    make docs


Execution
---
To run the project, type

    bin/elmacar

The stopwatch is controlled via the keyboard, via these keys:
- **s**: Start or stop
- **g**: Gear up
- **d**: Gear down
- **b**: Back up

Testing
---
To run tests, do
```bash
bin/test
```

Architecture
---
Describe how your project was designed, what choices you made, how things are organized, etc.

Results
---
Describe the results of testing and running your code. Include visuals when possible.

Acknowledgements
---
Mention anyone who helped you and how.

References
---

[Dependency Injection in C++](https://vladris.com/blog/2016/07/06/dependency-injection-in-c.html)

[cplusplus beginner](http://www.cplusplus.com/forum/beginner/216417/)

[C++ All-In-One Desk Reference For Dummies](https://www.amazon.com/All-One-Desk-Reference-Dummies/dp/0470317353)



