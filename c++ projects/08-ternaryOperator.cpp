#include <iostream>

//The ternary operator in C++ is a shorthand way of writing a simple if-else statement. 
//It is also known as the conditional operator because it evaluates a condition and returns one of two values, depending on whether the condition is true or false
//condition ? expression1 : expression;
int main() {

    //Ejemplo de uso del operador ternario para evaluar una nota
    int nota = 10;
    nota >= 60 ? std::cout << "aprobado" : std::cout << "reprobado";

    //Ejemplo de uso del operador ternario para evaluar si un numero es par o impar
    int num = 5;
    num %2 == 0 ? std::cout << "El numero es par" : std::cout << "El numero es impar";
    return 0;
}