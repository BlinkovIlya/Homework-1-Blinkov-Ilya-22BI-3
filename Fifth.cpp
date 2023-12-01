#include <iostream>
#include <cmath>

int main(){
    int radius = 0;
    int angle = 0;
    std::cout << "Input polar radius: ";
    std::cin >> radius;
    std::cout << "Input polar angle: ";
    std::cin >> angle;
    float coord1 = radius * cos(angle);
    float coord2 = radius * sin(angle);
    std::cout << "Cartesian coordinates are : [" << coord1 << " ; " << coord2 << "]" << std::endl;
}