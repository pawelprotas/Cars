#include "PetrolCar.hpp"
#include <iostream>

PetrolCar::PetrolCar(PetrolEngine* engine)
    : engine_(engine)
{
    std::cout << __FUNCTION__ << std::endl;
}

PetrolCar::~PetrolCar()         { std::cout << __FUNCTION__ << std::endl; }
void PetrolCar::refuel()        { std::cout << __FUNCTION__ << std::endl; }
void PetrolCar::changeEngine(Engine* pe) {
    auto petrolEngine = dynamic_cast<PetrolEngine*>(pe);
    if (petrolEngine) {
        delete engine_;
        engine_ = petrolEngine;
    }
}
void PetrolCar::refill() {
    refuel();
}
