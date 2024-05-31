#ifndef FreeDutyPrice_H
#define FreeDutyPrice_H

#include "Vehicle.h"

class freeDutyPrice : public Vehicle {
private:
    double exciseDutyRate;
    int Location, areaType;

public:
    freeDutyPrice(int Type, int Country, double Price, double Capacity, double exciseDuty, int Location)
        : Vehicle(Type, Country, Price, Capacity), exciseDutyRate(exciseDuty), Location(Location), areaType(0) {}

    ~freeDutyPrice() override = default;

    void getDetails() override;

    void setAreaType(int option);

    double calculateSalesTax();

    double calculateExciseDuty();

    double getFinalPrice();

    void someMethod();
};

#endif