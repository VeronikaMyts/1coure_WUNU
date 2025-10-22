#include <iostream>
#include "Engine.h"
#include "Turbo_jet.h"
#include "Diesel.h"
#include "InternalCombustionEngine.h"

int main() {

    Engine *turbojet=new Turbo_jet(40,23,1400);
    turbojet->add();
    Engine *disel=new Disel(90,70,4.5,3.5);
    disel->add();
    Engine *internal_combustion_engine=new InternalCombustionEngine(90,70,240);
    internal_combustion_engine->add();
    Engine::print();
    return 0;
}
