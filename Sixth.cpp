#include <iostream>
#include <cmath>

int main(){
    int coord1 = 0;
    int coord2 = 0;
    std::cout << "Input first cartesian coordinate: ";
    std::cin >> coord1;
    std::cout << "Input second cartesian coordinate: ";
    std::cin >> coord2;
    float radius = sqrt(pow(coord1, 2) + pow(coord2, 2));
    float angle = (float) coord2 / coord1;
    std::cout << "Polar coordinates are : [" << radius << " ; " << angle << "]" << std::endl;
}