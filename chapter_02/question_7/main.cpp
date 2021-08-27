#include <iostream>
using std::cout;
using std::endl;
using std::cin;

void printTime(int h, int m);

int main(void) {
    int hr, min;

    cout << "Enter the number of hours: ";
    cin >> hr;

    cout << "Enter the number of minutes: ";
    cin >> min;

    printTime(hr, min);

    return 0;
}

void printTime(int h, int m) {
    cout << "Time: " << h << ":" << m << endl;
}