#include <iostream>


int main() {

    int temp;
    bool isRaining = true;
    
    std::cout << "Enter the temperature: ";
    std::cin >> temp;
//&& is the logical AND operator
    if (temp > 0 && temp < 30){ //ambas tienen que ser verdaderas
        std::cout << "the temperature is good "<< std::endl;

    } else{
        std::cout << "the temperature is bad "<< std::endl;
    }
//|| is the logical OR operator
    if (temp <= 0 || temp >= 30){ //uno de ellos es verdadero
        std::cout << "the temperature is bad "<< std::endl;

    } else{
        std::cout << "the temperature is good "<< std::endl;
    }
//! The logical NOT operator 
    if (!isRaining ){ //
        std::cout << "its not raining "<< std::endl;

    } else{
        std::cout << "its raining"<< std::endl;
    }
return 0;
}