#include <string>
#include <iostream>


float calculateFuelForTrip(int distance, int avarageFuelConsumption){

    return (distance/100 * avarageFuelConsumption);
}

float calculateTripCost(int fuelCost, float usedFuel){

    return fuelCost * usedFuel;
}

int main(){

    std::string make = "Nissan";
    std::string model = "Serena";
    std::string color = "White";

    int year = 2011;
    int maxSpeed = 180;
    float avarageFuelConsumption = 10;

    int distance;
    float fuelPrice;

    std::cout << "Pleace, enter distance you will travale(Example: 340)";
    std::cin >> distance;

    std::cout << "Please, enter the fuiel cost(Example: 3.14)";
    std::cin >> fuelPrice;


    float cost = calculateTripCost(fuelPrice, calculateFuelForTrip(distance, avarageFuelConsumption));

    std::cout << "This trip gonna cost you: " << cost << " lari one way.\n";

    return 0;
}
