#include <iostream>
#include <cmath>

int main() {

double a, b, c;
std::cout << "Ingrese el cateto a: ";
std::cin >> a;

std::cout << "Ingrese el cateto b: ";
std::cin >> b;

a= pow(a, 2); // elevar a al cuadrado
b= pow(b, 2); // elevar b al cuadrado
c= sqrt(a + b); // sqrt es la raiz cuadrada

std::cout << "La hipotenusa es: " << c << std::endl;

    return 0;
}