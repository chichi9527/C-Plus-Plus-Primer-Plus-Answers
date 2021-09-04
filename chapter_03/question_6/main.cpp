#include <iostream>

int main(void) {
    using std::cout;
    using std::endl;
    using std::cin;

    int km, l;

    cout << "How many kilometers did you drive: ";
    cin >> km;

    cout << "How many liters of gasoline did you consume: ";
    cin >> l;

    cout << "You consume " << static_cast<double>(l) * 100 / km;
    cout << " liters of gasoline per 100 kilometers." << endl;

    return 0;
}