#include <iostream>
#include <cassert>

int main(){
    float day = 0;
    float hours = 0;
    float cost = 0;
    std::cout << "Input day (from 1 to 7): ";
    std::cin >> day;
    assert(day > 0 && day < 8);
    std::cout << "Input the number of hours: ";
    std::cin >> hours;
    std::cout << "Input cost per hour: ";
    std::cin >> cost;
    float finalCost = hours * cost;
    if (day == 6 || day == 7){
        finalCost -= (hours * cost) / 5;
    }
    std::cout << "The cost of conversation is: " << finalCost << std::endl;
}