#include <iostream>

int main(void) {
    using std::cout;
    using std::endl;
    using std::cin;

    int foot, inch, pound;

    cout << "Your height is x feet y inches and your weight is z pounds." << endl;
    cout << "Enter the number x: ";
    cin >> foot;

    cout << "Enter the number y: ";
    cin >> inch;

    cout << "Enter the number z: ";
    cin >> pound;

    double m = (foot * 12 + inch) * 0.0254;
    double kg = pound / 2.2;

    cout << "Your BMI is ";
    cout << kg / (m * m);
    cout << endl;

    return 0;
}