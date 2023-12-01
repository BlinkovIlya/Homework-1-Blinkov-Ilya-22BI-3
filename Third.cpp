#include <iostream>
#include <cmath>


int main(){
    float sideA = 0;
    float sideB = 0;
    std::cout << "Input first side: ";
    std::cin >> sideA;
    std::cout << "Input second side: ";
    std::cin >> sideB;
    float square = sideA * sideB / 2;
    float hyp = sqrt(sideA * sideA + sideB * sideB);
    std::cout << "Triangle square: " << square << std::endl;
    std::cout << "Triangle hypotenuse: " << hyp << std::endl;
}