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
        float med1 = sqrt(2 * pow(sideC, 2) + 2 * pow(sideB, 2) - pow(sideA, 2)) / 2;
        float med2 = sqrt(2 * pow(sideC, 2) + 2 * pow(sideA, 2) - pow(sideB, 2)) / 2;
        float med3 = sqrt(2 * pow(sideA, 2) + 2 * pow(sideB, 2) - pow(sideC, 2)) / 2;
        std::cout << "\nThe units of medians are: [ " << med1 << " ; " << med2 << " ; " << med3 << " ]" << std::endl;
    }else{
        std::cout << "This triangle doesn't exist!";
    }
}