#include <iostream>

int main(void) {
    using std::cout;
    using std::endl;
    using std::cin;

    const int inToFt = 12;
    int inch;

    cout << "Enter your height(inch): __\b\b";
    cin >> inch;

    cout << "Your height is ";
    cout << inch / inToFt << " foot and ";
    cout << inch % inToFt << " inch ";
    cout << endl;

    return 0;
}