#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Введите число для вычисления факториала: " << endl;
    cin >> n;
    
    int f = 1;
    
    for (int i = n; i > 1; i--) {
        f *= i;
    }
    
    cout << "Факториал числа " << n << " равен " << f << ".";
    
    return 0;
}
