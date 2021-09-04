#include <iostream>

int main(void) {
    using std::cout;
    using std::endl;
    using std::cin;

    long sec, min, hr, d;

    cout << "Enter the number of seconds: ";
    cin >> sec;

    min = sec / 60;
    hr = min / 60;
    d = hr / 24;

    cout << sec << " seconds = ";
    cout << d << " days, ";
    cout << hr % 24 << " hours, ";
    cout << min % 60 << " minutes, ";
    cout << sec % 60 << " seconds" << endl;

    return 0;
}