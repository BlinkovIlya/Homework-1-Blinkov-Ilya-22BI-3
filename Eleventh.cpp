#include <iostream>
#include <cmath>

int main(){
    float cost = 0.f;
    std::cout << "Input cost: ";
    std::cin >> cost;
    if (cost > 1000){
        float discCost = cost - cost / 10;
        std::cout << "Discount cost is: " << discCost << std::endl;
    }else{
        std::cout << "No discount!" << std::endl;
    }
}