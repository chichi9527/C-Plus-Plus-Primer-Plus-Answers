#include <iostream>
using std::cout;
using std::endl;

void printMice(void);
void printSee(void);

int main(void) {
    printMice();
    printMice();
    printSee();
    printSee();

    return 0;
}

void printMice(void) {
    cout << "Three blind mice" << endl;
}

void printSee(void) {
    cout << "See how they run" << endl;
}