#include <iostream>
#include <iomanip>
using namespace std;

void printHeader() {
    cout << " x\\yz | 00 | 01 | 11 | 10 |\n";
    cout << "------|----|----|----|----|\n";
}

int main() {
    cout << "Карта для: (x && y) || z\n";
    printHeader();
    for (int x : {0, 1}) {
        cout << "  " << x << "   | " 
             << ((x&&0)||0) << "  | " << ((x&&0)||1) << "  | " 
             << ((x&&1)||1) << "  | " << ((x&&1)||0) << "  |\n";
    }
    cout << "\nКарта для: x  !y  !z\n";
    printHeader();
    for (int x : {0, 1}) {
        cout << "  " << x << "   | " 
             << (x||!0||!0) << "  | " << (x||!0||!1) << "  | " 
             << (x||!1||!1) << "  | " << (x||!1||!0) << "  |\n";
    }
    cout << "\nКарта для: !x  y  z\n";
    printHeader();
    for (int x : {0, 1}) {
        cout << "  " << x << "   | " 
             << (!x||0||0) << "  | " << (!x||0||1) << "  | " 
             << (!x||1||1) << "  | " << (!x||1||0) << "  |\n";
    }
    return 0;
}
