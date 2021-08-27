#include <iostream>

int main(void) {
    using std::cout;
    using std::endl;
    using std::cin;

    int furlongs;

    cout << "Translate furlong to yard." << endl;
    cout << "type a number: ";
    cin >> furlongs;
    cout << furlongs << " furlongs are equal to " << furlongs * 220 << " yards." << endl;

    return 0;
}