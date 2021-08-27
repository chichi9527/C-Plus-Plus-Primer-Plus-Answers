#include <iostream>

int main(void) {
    using std::cout;
    using std::endl;
    using std::cin;

    int age;

    cout << "Enter your age: ";
    cin >> age;

    cout << endl;
    cout << "Your age in months is " << age * 12 << endl;

    return 0;
}