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

   if (age >= 18) { //you do something if the condition is true
        std::cout << "You are an adult." << std::endl;
    } else if (age ==0) { //if thers other conditions you want to check use else if
       std::cout << "You are a baby." << std::endl;
      std::cout <<"you are a baby" << std::endl;
    }
    else { //you do something if the condition is false
       std::cout << "You are a minor." << std::endl;
    }

   std::cout <<"Hi! " << name << '\n' << "You have " << age << " years old." << '\n';

   return 0;
}
