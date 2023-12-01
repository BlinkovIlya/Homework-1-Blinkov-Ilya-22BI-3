#include <iostream>
#include <cassert>

int random(int min, int max){
    int number = min + rand() % (max - min + 1);
    return number;
}

int main(){
    srand(time(NULL));
    int number = 0;
    std::cout << "Input three-digit number (from 100 to 999): ";
    std::cin >> number;
    assert(number > 99 && number < 1000);
    int b = random(0, 1000);
    if (number > b){
        std::cout << number << " is more than " << b;
    }else if(number == b){
        std::cout << number << " is equal to " << b;
    }else{
        std::cout << number << " is less than " << b;
    }
    int sum = 0;
    int num1 = number;
    while(num1 != 0){
        sum += num1 % 10;
        num1 /= 10;
    }
    if (sum % 7 == 0){
        std::cout << "\nSum of digits in " << number << " is multiple to 7";
    }else{
        std::cout << "\nSum of digits in " << number << " isn't multiple to 7" << std::endl;
    }
}