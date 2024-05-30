#include "Vehicle.h"

void Display(const Vehicle& vehicle){
    std::cout << "Type: " << vehicle.Type << ", Country of origin: " << vehicle.countryOfOrigin
    << ", Manufacture Price: " << vehicle.manufacturerPrice << ", Engine Capacity: " << vehicle.engineCapacity << '\n';

}