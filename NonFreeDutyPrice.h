#ifndef NonFreeDutyPrice_H
#define NonFreeDutyPrice_H

#include "FreeDutyPrice.h"

class nonFreeDutyPrice : freeDutyPrice{
    private:
        double importDutyRate;
        int Location;

    public:
        nonFreeDutyPrice(std::string Type, std::string Country, double Price, double Capacity, double exciseDuty, double importDuty, int Location)
            :freeDutyPrice(Type, Country, Price, Capacity, exciseDuty, Location), importDutyRate(importDuty){}

            ~nonFreeDutyPrice() override = default;
            void getDetails() override;

            double calculateImportDuty();
            double getFinalPrice();

};

#endif