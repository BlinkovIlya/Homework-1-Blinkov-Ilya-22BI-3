#include <iostream>

int main(){
    int height = 0;
    int weight = 0;
    std::cout << "Input height: ";
    std::cin >> height;
    std::cout << "Input weight: ";
    std::cin >> weight;
    if (height - 100 == weight){
        std::cout << "\nYour weight is ideal!" << std::endl;
    }else{
        if(weight < height - 100){
            std::cout << "\nYou must gain some weight!" << std::endl;
        }else{
            std::cout << "\nYou must lose some weight!" << std::endl;
        }
    }
}