#include <iostream>

void convertCelsiusToFahrenheit() {
    std::cout << "Enter the temperature in Celsius: ";
    double celsius;
    std::cin >> celsius;

    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    
    std::cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit." << std::endl;
}

void convertFahrenheitToCelsius() {
    std::cout << "Enter the temperature in Fahrenheit: ";
    double Fahrenheit;
    std::cin >> Fahrenheit;

    double celsius = 5 / 9 *(Fahrenheit - 32.0);
    
    std::cout << Fahrenheit << " degrees Fahrenheit is " << celsius << " degrees celsius." << std::endl;
}

int main() {
    return 0;
}
