#include <iostream>

int main(void) {
    using std::cout;
    using std::endl;
    using std::cin;

    long long world, us;

    cout << "Enter the world's population: ";
    cin >> world;

    cout << "Enter the population of the US: ";
    cin >> us;

    cout << "The population of the US is ";
    cout << static_cast<long double>(us) / world * 100 << "\% of the world population." << endl;

    return 0;
}