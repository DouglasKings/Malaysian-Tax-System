#ifndef FreeDutyPrice_H
#define FreeDutyPrice_H

#include "Vehicle.h"

class freeDutyPrice : Vehicle{
    private:
        double exciseDutyRate;
        int Location;

    public:
        freeDutyPrice(int Type, int Country, double Price, double Capacity, double exciseDuty, int Location)
            :Vehicle(Type, Country, Price, Capacity), exciseDutyRate(exciseDuty), Location(Location){}

            ~freeDutyPrice() override = default;
            void getDetails() override;

            double calculateSalesTax();
            double calculateExciseDuty();
            double getFinalPrice();

};

#endif