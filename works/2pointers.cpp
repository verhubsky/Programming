#include <iostream>
#include <cmath>
using namespace std;

double calculateTanX(double** ptr) {
    return tan(**ptr);
}

double calculateCtanX(double** ptr) {
    return 1/(tan(**ptr));
}

double calculateTan2X(double** ptr) {
    return tan(**ptr) / (1/tan(**ptr));
}

int main() {
    double x;
    
    cout << "Введите значение x в радианах: ";
    cin >> x;
    
    double* y = &x;
    double** pX = &y;
    cout << "tan(x) = " << calculateTanX(pX) << endl;
    cout << "ctan(x) = " << calculateCtanX(pX) << endl;
    cout << "tan(x)^2 = " << calculateTan2X(pX) << endl;
    
    return 0;
}
