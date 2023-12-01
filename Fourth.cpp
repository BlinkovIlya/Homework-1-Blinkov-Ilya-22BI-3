#include <iostream>

int main(){
    int number = 0;
    std::cout << "Input four-size number: ";
    std::cin >> number;
    int first = number / 1000;
    int second = number % 1000 / 100;
    int third = number % 1000 % 100 / 10;
    int fourth = number % 1000 % 100 % 10;
    int sum = first + second + third + fourth;
    std::cout << "Sum of numbers in number is: " << sum << std::endl;
}