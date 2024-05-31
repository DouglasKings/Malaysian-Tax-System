#ifndef NonFreeDutyPrice_H
#define NonFreeDutyPrice_H

#include "FreeDutyPrice.h"

class nonFreeDutyPrice : public freeDutyPrice {
public:
    nonFreeDutyPrice(int Type, int Country, double Price, double Capacity, double exciseDuty, int Location, int option)
        : freeDutyPrice(Type, Country, Price, Capacity, exciseDuty, Location) {
            setAreaType(option);
        }

    ~nonFreeDutyPrice() override = default;

    void getDetails() override;

    void setAreaType(int option);

    double calculateImportDuty();

    double getFinalPrice();

    void someOtherMethod();
};

#endif