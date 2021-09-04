#include <iostream>

int main(void) {
    using std::cout;
    using std::endl;
    using std::cin;

    int degree, minute, second;

    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees: ";
    cin >> degree;

    cout << "Next, enter the minutes of arc: ";
    cin >> minute;

    cout << "Finally, enter the seconds of arc: ";
    cin >> second;

    cout << degree << " degrees, ";
    cout << minute << " minutes, ";
    cout << second << " seconds = ";
    cout << static_cast<double>(degree) + (static_cast<double>(minute) + static_cast<double>(second) / 60) / 60;
    cout << " degrees" << endl;

    return 0;
}