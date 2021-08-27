#include <iostream>
using std::cout;
using std::endl;
using std::cin;

double translateCelsiusToFahrenheit(double d);

int main(void) {
    double d;

    cout << "Please enter a Celsius value: ";
    cin >> d;

    cout << d << " degrees Celsius is " << translateCelsiusToFahrenheit(d) << " degrees Fahrenheit." << endl;

    return 0;
}

double translateCelsiusToFahrenheit(double d) {
    return 1.8 * d + 32.0;
}