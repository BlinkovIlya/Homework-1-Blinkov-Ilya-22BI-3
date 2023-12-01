#include <iostream>
#include <cassert>

int main(){
    int ticket = 0;
    std::cout << "Input six-number ticket: ";
    std::cin >> ticket;
    assert(ticket <= 999999);
    int first = ticket / 100000;
    int second = ticket % 100000 / 10000;
    int third = ticket % 100000 % 10000 / 1000;
    int fourth = ticket % 100000 % 10000 % 1000 / 100;
    int fifth = ticket % 100000 % 10000 % 1000 % 100 / 10;
    int sixth = ticket % 100000 % 10000 % 1000 % 100 % 10;
    if (first + second + third == fourth + fifth + sixth){
        std::cout << "\nHorray! Lucky!" << std::endl;
    }else{
        std::cout << "\nCry! Unlucky!" << std::endl;
    }
}