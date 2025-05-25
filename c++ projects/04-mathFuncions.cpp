#include <iostream>
#include <cmath> // for math functions

int main () {

    double x = 3.14;
    double y = 2.71;
    double z;

    z= std::max (x,y); // max function
    std::cout << "Max: " << z << std::endl;

    z = std::min(x, y); // min function
    std::cout << "Min: " << z << std::endl;

    z = std::abs(-5.5); // valor absoluto, el postivo del numero que doy
    std::cout << "Absolute value: " << z << std::endl;
    
    z= round(x); // redondeo
    std::cout << "Round: " << z << std::endl;

    z= ceil(x); // redondeo hacia arriba
    std::cout << "Ceil: " << z << std::endl;

    z= floor(y); // redondeo hacia abajo
    std::cout << "Floor: " << z << std::endl;

    return 0;
}

