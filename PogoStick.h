//
// Created by Esteban Parra on 9/5/19.
//

#ifndef DRIVINGSIMULATOR_POGO_H
#define DRIVINGSIMULATOR_POGO_H

#include "Vehicle.h"

class PogoStick: public Vehicle {

public:
    explicit PogoStick(string brand, string model);

    virtual ~PogoStick();
    virtual double mileageEstimate(double time);

    virtual string toString();
};


#endif //DRIVINGSIMULATOR_POGO_H
