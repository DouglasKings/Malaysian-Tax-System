#ifndef UserInfo_H
#define UserInfo_H

#include "Vehicle.h"

class userInfo : public Vehicle {
private:
    int Location, Country, Type, carType; 
    double Price, Capacity; 

public:
    userInfo(int Location, int Country, int Type, int carType, double Price, double Capacity)
        : Vehicle(Type, Country, Price, Capacity), Location(Location), Country(Country),
          Type(Type), carType(carType), Price(Price), Capacity(Capacity) {} 

    void Display() const; 

};

#endif