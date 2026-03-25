#include <iostream>
using namespace std;

class RSTrigger {
private:
    bool Q;
    bool Qn;

public:
    RSTrigger() : Q(false), Qn(true) {}

    void setInputs(bool S, bool R) {
        if (S && !R) {
            Q = true;
            Qn = false;
        } else if (!S && R) {
            Q = false;
            Qn = true;
        } else if (S && R) {
            cout << "Неправильное состояние (S=1, R=1)" << endl;
        }
    }

    void displayState() {
        cout << "Q = " << Q << ", NOT Q = " << Qn << endl;
    }
};

int main() {
    RSTrigger rs;

    bool set, reset;

    while (true) {
        cout << "Введите S (установить) и R (сбросить) (1 или 0, -1 для выхода): ";
        cin >> set;
        if (set == -1) break;
        cin >> reset;

        rs.setInputs(set, reset);
        rs.displayState();
    }

    return 0;
}
