#ifndef UserInfo_H
#define UserInfo_H

#include "Vehicle.h"

class userInfo : public Vehicle {
private:
    int Location, Country, Type, carType; 
    double Price, Capacity; 

public:
    userInfo(int Location, int Country, int Type, int carType, double Price, double Capacity)
        : Vehicle(Type, Country, Price, Capacity), 
          Location(Location),
          Country(Country),
          Type(Type),
          carType(carType),
          Price(Price),
          Capacity(Capacity) {} 

     void Display(const userInfo& userinfo); 

};

#endif 

/*#ifndef UserInfo_H
#define UserInfo_H

#include <iostream>
#include "Vehicle.h" 

class userInfo : public Vehicle {
private:
    int Location, Country, Type, carType; 
    double Price, Capacity; 

public:
    userInfo(int Location, int Country, int Type, int carType, double Price, double Capacity)
        : Vehicle(Type, Country, Price, Capacity), 
          Location(Location),
          Country(Country),
          Type(Type),
          carType(carType),
          Price(Price),
          Capacity(Capacity) {}

    // Getter methods for private members, are used to access (get) the values of private member variables of the class.
    int getLocation() const { return Location; }
    int getCountry() const { return Country; }
    int getType() const { return Type; }
    int getCarType() const { return carType; }
    double getPrice() const { return Price; }
    double getCapacity() const { return Capacity; }

    void getDetails() const {
        if (carType == 1) { 
            auto vehicle = new freeDutyPrice(Location, Country, Type, Price, Capacity);
            vehicle->getDetails();
            delete vehicle;
        } else if (carType == 2) { 
            auto vehicle = new nonFreeDutyPrice(Location, Country, Type, Price, Capacity);
            vehicle->getDetails();
            delete vehicle;
        } else {
            throw std::runtime_error("Invalid car type");
        }

        std::cout << "Location: " << Location << std::endl;
        std::cout << "Country: " << Country << std::endl;
        std::cout << "Type: " << Type << std::endl;
        std::cout << "Car Type: " << carType << std::endl;
        std::cout << "Price: $" << Price << std::endl;
        std::cout << "Capacity: " << Capacity << std::endl;
    }
};

#endif*/