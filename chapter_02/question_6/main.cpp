#include <iostream>
using std::cout;
using std::endl;
using std::cin;

double lightYearsToAU(double d);

int main(void) {
    double d;

    cout << "Enter the number of light years: ";
    cin >> d;

    cout << d << " light years = " << lightYearsToAU(d) << " astronomical units." << endl;

    return 0;
}

double lightYearsToAU(double d) {
    return d * 63240;
}