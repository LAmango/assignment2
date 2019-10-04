//
// Created by Esteban Parra on 9/5/19.
//

#include "PogoStick.h"


PogoStick::PogoStick(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

PogoStick::~PogoStick() = default;

double PogoStick::mileageEstimate(double time) {
    double mileage;
    mileage = rand() % 5 + 1;
    mileage = mileage/100;
    mileage = mileage * time;
    return mileage;
}

string PogoStick::toString() {
    string s = "-> PogoStick\n\t";
    return "-> PogoStick\n" + Vehicle::toString();
}
