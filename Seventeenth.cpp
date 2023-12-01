#include <iostream>
#include <cassert>

//Я делал похожее задание и код взял из repl.it. Вот ссылка (https://replit.com/@BlinkovIlya/DZ565#main.cpp);

int main() {
  int cop = 0;
  std::cout << "Введите сумму в копейках: ";
  std::cin >> cop;
  assert(cop > 0 && cop < 100);

  if(cop % 100 > 10 && cop % 100 < 20){
    std::cout << "\nУ вас " << cop << " копеек.\n";
  }else if (cop % 10 == 2 || cop % 10 == 3 || cop % 10 == 4){
    std::cout << "\nУ вас " << cop << " копейки.\n";
  }else if(cop < 0){
    std::cout << "\nОшибка! Введено некорректное значение.\n";
  }else if (cop % 10 == 1){
    std::cout << "\nУ вас " << cop << " копейка.\n";
  }else{
    std::cout << "\nУ вас " << cop << " копеек.\n";
  }
}