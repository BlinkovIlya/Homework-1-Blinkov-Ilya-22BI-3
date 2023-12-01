#include <iostream>
#include <cassert>

int main(){
    int month = 0;
    std::cout << "Input month number(from 1 to 12): ";
    std::cin >> month;
    assert(month > 0 && month < 13);
    if (month == 1){
        std::cout << "\nHorray! It's Janurary and Winter!" << std::endl;
    }else if (month == 2){
        std::cout << "\nHorray! It's Feburary and Winter!" << std::endl;
    }else if (month == 3){
        std::cout << "\nHorray! It's March and Spring!" << std::endl;
    }else if (month == 4){
        std::cout << "\nHorray! It's April and Spring!" << std::endl;
    }else if (month == 5){
        std::cout << "\nHorray! It's May and Spring!" << std::endl;
    }else if (month == 6){
        std::cout << "\nHorray! It's June and Summer!" << std::endl;
    }else if (month == 7){
        std::cout << "\nHorray! It's July and Summer!" << std::endl;
    }else if (month == 8){
        std::cout << "\nHorray! It's August and Summer!" << std::endl;
    }else if (month == 9){
        std::cout << "\nHorray! It's September and Autumn!" << std::endl;
    }else if (month == 10){
        std::cout << "\nHorray! It's October and Autumn!" << std::endl;
    }else if (month == 11){
        std::cout << "\nHorray! It's November and Autumn!" << std::endl;
    }else if (month == 12){
        std::cout << "\nHorray! It's December and Winter!" << std::endl;
    }
}