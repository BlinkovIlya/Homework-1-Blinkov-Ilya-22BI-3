#include <iostream>

int main(){
    int sizeInt = sizeof(int);
    int sizeFloat = sizeof(float);
    int sizeChar = sizeof(char);
    int sizeDouble = sizeof(double);
    int sizeBool = sizeof(bool);
    std::cout << "Sizes" << std::endl;
    std::cout << "int: " << sizeInt << std::endl;
    std::cout << "float: " << sizeFloat << std::endl;
    std::cout << "char: " << sizeChar << std::endl;
    std::cout << "double: " << sizeDouble << std::endl;
    std::cout << "bool: " << sizeBool << std::endl;
}