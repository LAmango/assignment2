//
// Created by Esteban Parra on 9/5/19.
//

#include "Skateboard.h"
#include <math.h>


Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time) {
    int mileage;
    if(time < 25 && time > 250) {
        mileage = rand() % 5 + 1;
        mileage = mileage/10;
        mileage = mileage * time;
        return mileage;
    } else {
        int n = floor(time/3);
        mileage = rand() % n + 1;
        return mileage;
    }

}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString();
}
