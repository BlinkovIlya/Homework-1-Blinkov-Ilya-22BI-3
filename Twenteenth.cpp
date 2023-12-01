#include <iostream>

int main(){
    float a = 0;
    float b = 0;
    float c = 0;
    float d = 0;
    std::cout << "Input the first side of the first rect: ";
    std::cin >> a;
    std::cout << "Input the second side of the first rect: ";
    std::cin >> b;
    std::cout << "Input the first side of the second rect: ";
    std::cin >> c;
    std::cout << "Input the second side of the second rect: ";
    std::cin >> d;
    if(a < c && b < d || a < d && b < c){
        std::cout << "\nThe first rect can be placed in the second one" << std::endl;
    }else{
        std::cout << "\nThe first rect cannot be placed in the second one" << std::endl;
    }
}