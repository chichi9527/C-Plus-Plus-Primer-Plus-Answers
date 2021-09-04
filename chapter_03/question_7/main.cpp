#include <iostream>

int main(void) {
    using std::cout;
    using std::endl;
    using std::cin;

    double lper100km;

    cout << "Enter the gasoline consumption of the car(L / 100 km): ";
    cin >> lper100km;

    cout << "The car is " << 100 * 3.875 / lper100km * 0.6214;
    cout << " miles per gallon." << endl;

    return 0;
}