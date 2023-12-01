#include <iostream>
#include <cmath>

int main(){
    float sideA = 0;
    float sideB = 0;
    float sideC = 0;
    std::cout << "Input first side: ";
    std::cin >> sideA;
    std::cout << "Input second side: ";
    std::cin >> sideB;
    std::cout << "Input third side: ";
    std::cin >> sideC;
    if (sideA + sideB > sideC && sideB + sideC > sideA && sideC + sideA > sideB){
        if (sideA == sideB || sideB == sideC || sideC == sideA){
            std::cout << "\nThis triangle is isosceles!" << std::endl;
        }else{
            std::cout << "\nThis triangle isn't isosceles!" << std::endl;
        }
    }else{
        std::cout << "This triangle doesn't exist!";
    }
}