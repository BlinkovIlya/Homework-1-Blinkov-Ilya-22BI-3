#include <iostream>

int main(){
    int sideA = 0;
    int sideB = 0;
    int height = 0;
    std::cout << "Input units" << std::endl;
    std::cout << "Input first base: ";
    std::cin >> sideA;
    std::cout << "Input second base: ";
    std::cin >> sideB;
    std::cout << "Input height: ";
    std::cin >> height;
    float square = (float)(sideA + sideB) * height / 2;
    std::cout << "\nSquare is: " << square << std::endl;
}