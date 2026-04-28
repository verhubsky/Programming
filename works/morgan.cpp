#include <iostream>
#include <vector>
#include <string>
using namespace std;

void printKMap(const string& title, bool (*func)(int, int, int)) {
    int grayCode[] = {0, 1, 3, 2};
    string labels[] = {"00", "01", "11", "10"};

    cout << "--- " << title << " ---" << endl;
    cout << "x\\yz | ";
    for(const auto& l : labels) cout << l << " | ";
    cout << endl << "-----------------------" << endl;

    for (int x = 0; x <= 1; x++) {
        cout << " " << x << "   | ";
        for (int i = 0; i < 4; i++) {
            int y = (grayCode[i] >> 1) & 1;
            int z = grayCode[i] & 1;
            cout << " " << func(x, y, z) << " | ";
        }
        cout << endl;
    }
    cout << endl;
}

bool f1(int x, int y, int z) { return (x && y) || z; }
bool f2(int x, int y, int z) { return x || (!(y && z)); }
bool f3(int x, int y, int z) { return (!x);  y;  z; }

int main() {
    printKMap("(x and y or z)", f1);
    printKMap("(x or (not(y and z)))", f2);
    printKMap("(not(x) or y or z)", f3);

    return 0;
}
