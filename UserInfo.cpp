#include "UserInfo.h"

void userInfo::Display() const {
    if(carType == 1) { 
        freeDutyPrice vehicleInstance(Type, Country, Price, Capacity, 0.0, Location); 
        vehicleInstance.getDetails();
    } else if(carType == 2) { 
        nonFreeDutyPrice vehicleInstance(Type, Country, Price, Capacity, 0.0, Location, 1);
        vehicleInstance.getDetails();
    } else {
        throw std::runtime_error("Invalid car type. Cannot create vehicle instance.");
    }

    std::cout << "Location: " << Location << std::endl;
    std::cout << "Country: " << Country << std::endl;
    std::cout << "Type: " << Type << std::endl;
    std::cout << "Car Type: " << carType << std::endl;
    std::cout << "Price: $" << Price << std::endl;
    std::cout << "Capacity: " << Capacity << std::endl;
}