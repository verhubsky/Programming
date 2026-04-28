#include <iostream>
using namespace std;

int main() {
    int number;
    
    cout << "Введите число для таблицы умножения: ";
    cin >> number;
    
    cout << "\n--- Цикл for (таблица умножения) ---" << endl;
    for(int i = 1; i <= 10; i++) {
        cout << number << " * " << i << " = " << number * i << endl;
    }
    
    cout << "\n--- Цикл while (обратный отсчет) ---" << endl;
    int countdown = 5;
    while(countdown > 0) {
        cout << countdown << " ";
        countdown--;
    }
    cout << "ПУСК!" << endl;
    
    cout << "\n--- Цикл do-while (меню) ---" << endl;
    int choice;
    do {
        cout << "Меню (1 - продолжить, 0 - выйти): ";
        cin >> choice;
        if(choice == 1) {
            cout << "Вы выбрали продолжить" << endl;
        }
    } while(choice != 0);
    cout << "Программа завершена" << endl;
    return 0;
}
