#include <iostream>
#include <string> // for std::getline

int main () {
    //user input
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin >> std::ws, name); // asi se elimina el buffer
    std::cout << "Hello " << name << "!" << std::endl;

   //if else
   int age;
   std::cout << "Enter your age: ";
    std::cin >> age;

   if (age >= 18) {
        std::cout << "You are an adult." << std::endl;
    } else {
       std::cout << "You are a minor." << std::endl;
    }

   std::cout <<"Hi! " << name << '\n' << "You have " << age << " years old." << '\n';

   return 0;
}