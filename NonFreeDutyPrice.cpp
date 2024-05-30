#include "NonFreeDutyPrice.h"

double nonFreeDutyPrice::calculateImportDuty(){
    double Price;
    return Price * 0.30;
}

double nonFreeDutyPrice::getFinalPrice(){
    return getFinalPrice() + calculateImportDuty(); // Adding import duty to the final price
} 

void nonFreeDutyPrice::getDetails(){
    std::cout << "This is a non free duty vehicle since it's in Peninsular Malaysia." << '\n';
}