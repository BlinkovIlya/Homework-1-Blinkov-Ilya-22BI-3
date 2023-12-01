#include <iostream>
#include <cassert>

int main(){
    int number;
    std::cout << "\nInput four-size number: ";
    std::cin >> number;
    assert(number < 10000);
    int first = number / 1000;
    int second = number % 1000 / 100;
    int third = number % 1000 % 100 / 10;
    int fourth = number  % 1000 % 100 % 10;
    if (first == fourth && second == third){
        std::cout << "\nIt is polydrome!" <<std::endl;
    }else{
        std::cout << "\nIt isn't polydrome!" <<std::endl;
    }
}