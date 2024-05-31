#include <iostream>
#include <limits>

int main() {
    int Location, Country, Type, carType;
    double Price, Capacity;

    // Prompting for user input
    std::cout << "Enter Location(1 for duty free Island such as Langkawi or 2 non free duty Peninsular Malaysia): ";
    std::cin >> Location; 
    if (Location!= 1 && Location!= 2) {
        std::cout << "Invalid Location. Please enter 1 for duty-free Islands or 2 for non-duty-free areas in Peninsula Malaysia.\n";
        return 1; // Exit the program after displaying error message
    }

    std::cout << "Enter Country(1 for Asia or 2 for non-Asean countries (such as Japan, Korea, Germany and France)): ";
    std::cin >> Country;
    if (Country!= 1 && Country!= 2) {
        std::cout << "Invalid Country. Please enter 1 for Asia or 2 for non-Asean countries. \n";
        return 1; // Exit the program after displaying error message
    }
    
    std::cout << "Enter Type (1 for Passenger cars (station wagons, sports cars and racing cars), 2 for Motor cars, 3 for commercial vehicles): ";
    std::cin >> Type;
    if (Type > 3) {
        std::cout << "Invalid Type. Please enter 1 for Passenger cars, 2 for Motor cars, 3 for commercial vehicles. \n";
        return 1; // Exit the program after displaying error message
    }

    std::cout << "Enter Car Type (1 for Free Duty, 2 for Non-Free Duty): ";
    std::cin >> carType;
    if (carType!= 1 && carType!= 2) {
        std::cout << "Invalid Car Type. Please enter either 1 for Free Duty or 2 for Non-Free Duty.\n";
        return 1; // Exit the program after displaying error message
    }

    std::cout << "Enter Price: ";
    std::cin >> Price;
    if (Price <= 0) {
        std::cout << "Invalid Price. Price must be greater than zero. \n";
        return 1; // Exit the program after displaying error message
    }

    std::cout << "Enter Capacity: ";
    std::cin >> Capacity;
    if (Capacity <= 0) {
        std::cerr << "Invalid Capacity. Capacity must be greater than zero. \n";
        return 1; // Exit the program after displaying error message
    }

    // Instantiate userInfo object
    userinfo.Display();

    // Display vehicle details
    try {
        userinfo.Display(); // This line seems incorrect since it passes the local userinfo object instead of another instance
        // Correct usage would depend on what you intend to achieve with Display method
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << '\n';
    }

    return 0;
}