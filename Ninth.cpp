#include <iostream>

int main(){
    int seconds = 0;
    std::cout << "Input from 0 to 86400 seconds: ";
    std::cin >> seconds;
    int hours = seconds / 3600;
    int minutes = seconds % 3600 / 60;
    seconds = seconds % 60 % 60;
    std::cout << hours << " hours " << minutes << " minutes " << seconds << " seconds passed from the beggining of a day." << std::endl;
}