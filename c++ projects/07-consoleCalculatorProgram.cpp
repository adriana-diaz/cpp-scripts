#include <iostream>

int main () {

char operation;
double num1, num2;
double result;

std::cout << "Enter first number: ";
std::cin >> num1;

std::cout << " Enter an operator (+, -, *, /): ";
std::cin >> operation;

std::cout << "Enter second number: ";
std::cin >> num2;

switch(operation) {
    case '+':
    result = num1 + num2;
    std::cout <<"El resultado es: " << result << std::endl;
    break;

    case '-':
    result = num1 - num2;
    std::cout <<"El resultado es: " << result << std::endl;
    break;

    case '*':
    result = num1 * num2;
    std::cout <<"El resultado es: " << result << std::endl;
    break;

    case '/':
    if (num2 != 0) { // si devulve true cae en la linea 39 (comprueba si dos valores no son iguales)
        result = num1 / num2;
        std::cout <<"El resultado es: " << result << std::endl;
    } else {
        std::cout << "Error: No se puede dividir por cero, ya que la operación no tiene un resultado único o consistente" << std::endl;
    }
    break;

    default:
    std::cout << "Error: Ingresa un operador valido." << std::endl;
}

return 0;
}