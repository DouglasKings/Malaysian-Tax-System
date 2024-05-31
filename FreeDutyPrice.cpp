#include "FreeDutyPrice.h"
#include <iostream>

void freeDutyPrice::setAreaType(int option) {
    if (option == 1) {
        areaType = 1; // Duty-free island
    } else if (option == 2) {
        areaType = 2; // Non-duty-free area
    } else {
        throw std::invalid_argument("Invalid option. Please choose 1 for duty-free islands or 2 for non-duty-free areas.");
    }
}

double freeDutyPrice::calculateSalesTax() {
    double Price = manufacturerPrice; 
    return Price * 0.1;
}

double freeDutyPrice::calculateExciseDuty() {
    double Price = manufacturerPrice; // Using the member variable for price
    double Capacity = engineCapacity; // Using the member variable for capacity
    if (Capacity < 1800) {
        return Price * 0.75;
    } else if (Capacity <= 1999) {
        return Price * 0.80;
    } else if (Capacity <= 2499) {
        return Price * 0.90;
    } else {
        return Price * 1.05;
    }
}

double freeDutyPrice::getFinalPrice() {
    double Price = manufacturerPrice; 
    return Price + calculateSalesTax() + calculateExciseDuty();
}

void freeDutyPrice::getDetails() {
    std::cout << "This vehicle is duty free since it's on an island such as Langkawi." << '\n';
     std::cout << "Manufacturer Price: $" << manufacturerPrice << '\n';
    std::cout << "Engine Capacity: " << engineCapacity << " cc" << '\n';
    std::cout << "Country of Origin: " << countryOfOrigin << '\n';
    std::cout << "Type: " << Type << '\n';
}
