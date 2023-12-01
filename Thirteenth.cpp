#include <iostream>

int random(int min, int max){
    int number = min + rand() % (max - min + 1);
    return number;
}

int main(){
    srand(time(NULL));
    int num1 = random(1, 9);
    int num2 = random(1, 9);
    std::cout << num1 << " multiplied by " << num2 << " equals " << num1 * num2 << "." << std::endl;
}