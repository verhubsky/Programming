#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double calculateLnSeries(double x, int N) {
    double sum = 0.0;
    double x_pow = x;
    for (int n = 1; n <= N; ++n) {
        double term = (n % 2 == 1 ? 1.0 : -1.0) * x_pow / n;
        sum += term;
        x_pow *= x;
    }
    return sum;
}

double calculateLnSeries(double x, double eps) {
    double sum = 0.0;
    double x_pow = x;
    double term;
    int n = 1;
    do {
        term = (n % 2 == 1 ? 1.0 : -1.0) * x_pow / n;
        sum += term;
        x_pow *= x;
        n++;
    } while (fabs(term) > eps && n < 1000000);
    return sum;
}

int main() {
    double u;
    cout << "Введите u (|u| >= 1): ";
    cin >> u;

    if (u == 0 || (fabs(1.0/u) > 1.0)) {
        cerr << "Ошибка: u должно быть по модулю >= 1" << endl;
        return 1;
    }

    double x = 1.0 / u;
    cout << fixed << setprecision(10);

    int N;
    cout << "Введите количество членов N: ";
    cin >> N;
    double resN = calculateLnSeries(x, N);
    cout << "Результат через N членов: " << u * resN << endl;

    double eps;
    cout << "Введите точность (например, 0.00001): ";
    cin >> eps;
    double resEps = calculateLnSeries(x, eps);
    cout << "Результат через точность: " << u * resEps << endl;

    cout << "Точное значение (log):   " << u * log(1.0 + x) << endl;

    return 0;
}
