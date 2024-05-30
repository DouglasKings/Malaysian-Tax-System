#ifndef Vehicle_H
#define Vehicle_H

#include <iostream>

class Vehicle{
    protected:
        std::string Type, countryOfOrigin;
        double manufacturerPrice, engineCapacity;

    public:
        Vehicle(const std::string Type, const std::string Country, double Price, double Capacity)
            : Type(Type), countryOfOrigin(Country), manufacturerPrice(Price), engineCapacity(Capacity){}

            
            /*A virtual destructor ensures proper cleanup of derived class objects when deleted through
            a base class pointer, preventing memory leaks and undefined behavior.*/
            virtual ~Vehicle() = default;
            virtual void getDetails() = 0;// Pure virtual function to ensure this class cannot be instantiated

            friend void Display(const Vehicle& vehicle);// Friend function to display user details

};

#endif