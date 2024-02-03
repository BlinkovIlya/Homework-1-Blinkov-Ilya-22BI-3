#include <iostream>
#include <string>
#include <vector>

struct employee{
    std::string name = "none";
    std::string surname = "none";
    std::string birthDate = "01.01.2000";
    int sallary = 0;
    int age = 0;
};

void update(std::vector <employee> num){
    int a = 0;
    std::cout << "\nInput employee number(from 1): ";
    std::cin >> a;
    a -= 1;
    std::cout << "Input employee data: ";
    std::cin >> num[a].name >> num[a].surname >> num[a].birthDate >> num[a].birthDate >> num[a].age;
}

void input(std::vector <employee> num){
    num.resize(num.size() + 1);
    std::cout << "Input employee data: ";
    std::cin >> num[num.size() - 1].name >> num[num.size() - 1].surname >> num[num.size() - 1].birthDate >> num[num.size() - 1].birthDate >> num[num.size() - 1].age;
}

void deleteE(std::vector <employee> num){
    int a = 0;
    std::cout << "\nInput employee number(from 1): ";
    std::cin >> a;
    a -= 1;
    std::vector <employee> num1;
    for(int i = 0; i < num.size(); i++){
        if(i != a){
            num1.push_back(num[i]);
        }
    }
    num = num1;
}

void print(std::vector <employee> num){
    for(int i = 0; i < num.size(); i++){
        std::cout << "\nData:" << "\nName: " << num[i].name << "\nSurname: " << num[i].surname << "\nBirth date: " << 
                                                num[i].birthDate << "\nSallary: " << num[i].sallary << "\nAge: " << 
                                                num[i].age << std::endl;
    }
}

int main(){
    while(true){
        std::vector <employee> num;
        std::cout << "\nInput operation: ";
        std::string answer;
        std::cin >> answer;
        void (*fnc)(std::vector <employee>);
        if(answer == "input"){
            void (*fnc)(std::vector <employee>) = input;
        }else if(answer == "update"){
            void (*fnc)(std::vector <employee>) = update;
        }else if(answer == "print"){
            void (*fnc)(std::vector <employee>) = print;
        }else if(answer == "delete"){
            void (*fnc)(std::vector <employee>) = deleteE;
        }else if(answer == "exit"){
            std::cout << "The end of programm! Bye." << std::endl;
        }else{
            std::cerr << "\nError! Invalid value input. Try gain." << std::endl;
        }
    }
}