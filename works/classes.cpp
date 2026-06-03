#include <iostream>
using namespace std;

class FileWorker {
private:
    string fileName;

public:
    FileWorker(string name) : fileName(name) {
        cout << "[КОНСТРУКТОР] - инициализируем объект" << endl;
        cout << "Файл '" << fileName << "' открыт." << endl;
    }

    void writeData(string text) {
        cout << "Записываем строку '" << text << "' в файл..." << endl;
    }

    ~FileWorker() {
        cout << "[ДЕСТРУКТОР] - объект уничтожается." << endl;
        cout << "Файл '" << fileName << "' был закрыт." << endl;
    }
};

int main() {
    cout << "---- Начало программы ----" << endl;

    {
        cout << "Создаём объект" << FileWorker.name << endl;
        FileWorker myFile("report.txt");

        myFile.writeData("Hello, human!");

        cout << "Объект вот-вот уничтожится" << endl;
    }

    cout << "---- Конец программы ----" << endl;

    return 0;
}
