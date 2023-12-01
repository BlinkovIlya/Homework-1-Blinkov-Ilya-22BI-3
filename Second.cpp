#include <iostream>
#include <cmath>

int main(){
    int radius = 0;
    std::cout << "Input radius: ";
    std::cin >> radius;
    float length = 2 * M_PI * radius;
    float square = pow(radius, 2) * M_PI;
    std::cout << "Circus length: " << length << std::endl;
    std::cout << "Circus square: " << square << std::endl;
}