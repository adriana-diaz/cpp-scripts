#include <iostream>


int main() {
char unit;
int temp;

std::cout <<"En cual unidad esta la temperatura? (C/F): ";
std::cin >> unit;

if (unit == 'F' || unit == 'f') {

 std::cout  << "Ingrese la temperatura en Fahrenheit: ";
    std::cin >> temp;
    // Convertir a Celsius
    temp = temp - 32 / 1.8;
    std::cout << "La temperatura en Celsius es: " << temp << std::endl;

} else if (unit == 'C' || unit == 'c') {

    std::cout << "Ingrese la temperatura en Celsius: ";
    std::cin >> temp;
    // Convertir a Fahrenheit
    temp = (1.8 * temp) + 32;
    std::cout << "La temperatura en Fahrenheit es: " << temp  << std::endl;

}
else {
    std::cout << "Digite una unidad valida";
}

    return 0;
}