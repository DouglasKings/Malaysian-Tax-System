# Malaysian Tax System
The price of a motor vehicle in Malaysia is determined by few factors such its manufacturer and few types of taxes. However, in the duty free Island such as Langkawi, there is no import duty imposed for vehicles. On the other hand, in Peninsular Malaysia, 30% import duty is imposed on vehicles imported from non-Asean countries (such as Japan, Korea, Germany and France). Vehicle prices are further escalated by the tax rate and excise duty imposed. According to Malaysian Automotive Association (MAA), on top of the 10% sales tax, the excise duty imposed on cars ranges from 65% to 105% (refer to table 1). Therefore, you are to write C++ program using an object oriented approach to develop a Vehicle price calculator. Your program should have at least a class called FreeDutyPrice consist of class’s members such as appropriate variables to store information, constructor, destructor and functions/methods. The information needed from user are: type of a vehicle, the country of origin, manufacturer price, engine capacity(cc), excise duty rate. The class ComputePrice should have at least the following functions/methods:- • CalculateSalesTax – to calculate the sales tax • CalculateExciseDuty – to calculate excise duty • GetFinalPrice – to calculate the total price of the vehicle. Engine Capacity (cc) Excise Duties < 1,800 75% 1,800 - 1,999 80% 2,000 - 2,499 90% Above 2,500 105% You also should define another class called nonFreeDutyPrice which inherits certain properties from class FreeDutyPrice. The class nonFreeDutyPrice is used to compute the total car price for Peninsular of Malaysia. Members of nonFreeDutyPrice class should at least have appropriate variables, constructions, destructors and functions/methods such as a calculate import duty. You are required to define a display function as a friend function to display information entered by a user. Finally, your program should display appropriate information about the vehicle and the total price of the vehicle inclusive of all taxes. [Note: input and output should be done in main() program].



// Convert integers to strings
    std::string strLocation = std::to_string(Location);
    std::string strCountry = std::to_string(Country);
    std::string strType = std::to_string(Type);

    // Now, if you want to convert them back to integers
    int Location = std::stoi(strLocation);
    int Country = std::stoi(strCountry);
    int Type = std::stoi(strType);