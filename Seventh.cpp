#include <iostream>
#include <cmath>

int main(){
    std::cout << "You have a square equation kind of a(x^2)+bx+c=0. This function will find answer by putting a, b, and c.\n";
    std::cout << "Input a: ";
    float a = 0;
    std::cin >> a;
    std::cout << "Input b: ";
    float b = 0;
    std::cin >> b;
    std::cout << "Input c: ";
    float c = 0;
    std::cin >> c;
    float dis = pow(b, 2) - 4 * a * c;
    if(dis >= 0){
        if(dis > 0){
            float x1 = (-b + sqrt(dis))/(2 * a);
            float x2 = (-b + sqrt(dis))/(2 * a);
            std::cout << "The roots are: [" << x1 << " ; " << x2 << "]" << std::endl;
        }else if(dis == 0){
            float x = -b/(2 * a);
            std::cout << "The root is: " << x << std::endl;
        }
    }else{
        std::cout << "\nError! This equation is unsolvable, because discriminant is negative." << std::endl;
    }
}