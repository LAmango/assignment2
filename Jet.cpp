//
// Created by Esteban Parra on 9/5/19.
//

#include "Jet.h"

Jet::Jet() {
    setBrand("Custom");
    setModel("VTx");
}

Jet::Jet(string brand, string model, string fuelType, int numberOfEngines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(numberOfEngines);
}

Jet::~Jet() = default;

int Jet::getNumberOfEngines() {
    return numberOfEngines;
}

void Jet::setNumberOfEngines(int engine) {
    numberOfEngines = engine;
}

double Jet::mileageEstimate(double time) {
    double mileage = rand() % 40 + 60; 
	if(fuelType == "Rocket" && getNumberOfEngines() == 2){
        double boost = mileage*.055;
        mileage=+boost;
    }
    mileage= mileage  * 60;
    return mileage*time;
}

string Jet::toString() {
    int engines = getNumberOfEngines();
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngine Count: " + std::to_string(engines);
           
}
