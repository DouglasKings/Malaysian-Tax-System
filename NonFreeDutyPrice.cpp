#include "NonFreeDutyPrice.h"
#include <iostream>

void nonFreeDutyPrice::setAreaType(int option) {
    if (option == 1) {
        int areaType = 1; 
    } else if (option == 2) {
        int areaType = 2; 
    } else {
        throw std::invalid_argument("Invalid option. Please choose 1 for duty-free islands or 2 for non-duty-free areas.");
    }
}

double nonFreeDutyPrice::calculateImportDuty() {
    double Price = manufacturerPrice; 
    return Price * 0.30;
}

double nonFreeDutyPrice::getFinalPrice() {
    double Price = manufacturerPrice; 
    double salesTax = calculateSalesTax(); 
    double exciseDuty = calculateExciseDuty();
    double importDuty = calculateImportDuty();
    return Price + salesTax + exciseDuty + importDuty;
}

void nonFreeDutyPrice::getDetails() {
    std::cout << "This is a non free duty vehicle since it's in Peninsular Malaysia." << '\n';
    std::cout << "Manufacturer Price: $" << manufacturerPrice << '\n';
    std::cout << "Engine Capacity: " << engineCapacity << " cc" << '\n';
    std::cout << "Country of Origin: " << countryOfOrigin << '\n';
    std::cout << "Type: " << Type << '\n';
    std::cout << "Additional Import Duty: " << calculateImportDuty() << "%" << '\n';
}