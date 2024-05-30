#include "FreeDutyPrice.h"
#include <cmath>

double freeDutyPrice::calculateSalesTax(){
    double Price;
    return Price * 0.1;
}

double freeDutyPrice::calculateExciseDuty(){
    double Capacity, Price;
    if(Capacity < 1800){
        return Price * 0.75;
    }else if(Capacity <= 1999){
        return Price * 0.80;
    }else if(Capacity <= 2499){
        return Price * 0.90;
    }else{
        return Price * 1.05;
    }
}

double freeDutyPrice::getFinalPrice(){
    double Price;
    return Price + calculateSalesTax() + calculateExciseDuty();
}

void freeDutyPrice::getDetails(){
    std::cout << "This vehicle is duty free since it's on an island such as Langkawi." << '\n';
}