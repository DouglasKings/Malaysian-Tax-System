#ifndef Vehicle_H
#define Vehicle_H

#include <iostream>
#include <stdexcept>

class Vehicle{
    protected:
        int Type, countryOfOrigin, areaType;
        double manufacturerPrice, engineCapacity;

    public:
        Vehicle(int Type, int Country, double Price, double Capacity)
            : Type(Type), countryOfOrigin(Country), manufacturerPrice(Price), engineCapacity(Capacity){}

        virtual ~Vehicle() = default;
        virtual void getDetails() = 0;

        void setAreaType(int option) {
            if (option == 1 || option == 2) {
                areaType = option;
            } else {
                throw std::invalid_argument("Invalid option. Please choose 1 or 2.");
            }
        }

        friend void Display(const Vehicle& vehicle);
};

#endif