#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int x, y;
    
    cout << "Введите два числа: ";
    cin >> x >> y;
    
    cout << "Сумма: " << add(x, y) << endl;
    cout << "Разность: " << subtract(x, y) << endl;
    
    return 0;
}
