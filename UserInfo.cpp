/*#include "UserInfo.h"
#include <stdexcept>

void userInfo::Display(const userInfo& userinfo) {
    Vehicle* vehicle;

    if(userinfo.carType == 1) { 
        vehicle = new freeDutyPrice(userinfo.Location, userinfo.Country, userinfo.Type, userinfo.Price, userinfo.Capacity);
    } else if(userinfo.carType == 2) { 
        vehicle = new nonFreeDutyPrice(userinfo.Location, userinfo.Country, userinfo.Type, userinfo.Price, userinfo.Capacity);
    }

    Checking if the vehicle pointer is not null, indicating successful memory allocation. or not null.
    nullptr represents a null pointer, indicating that the pointer does not point to any valid memory 
    location.
    if(vehicle!= nullptr) {
        vehicle->getDetails(); 
        delete vehicle; 
    } else {
        throw std::runtime_error("Failed to allocate memory for Vehicle");
    }

    std::cout << "Location: " << userinfo.Location << std::endl;
    std::cout << "Country: " << userinfo.Country << std::endl;
    std::cout << "Type: " << userinfo.Type << std::endl;
    std::cout << "Car Type: " << userinfo.carType << std::endl;
    std::cout << "Price: $" << userinfo.Price << std::endl;
    std::cout << "Capacity: " << userinfo.Capacity << std::endl;
}*/