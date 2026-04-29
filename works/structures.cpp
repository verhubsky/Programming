#include <iostream>
#include <string>
using namespace std;



struct User{
  string name;
  string phoneNumber;
  string email;
  bool isPremium;
  int age;
};

int main()
{
    auto [uname, uphone, uemail, upremium, uage] = User("Micle", "79031234567", "no-reply-support@google.com", true, 18);
    cout << "-------------- INFORMATION --------------" << endl;
    cout << "| Name: " << uname << "                           |" << endl;
    cout << "| Phone: " << uphone << "                    |" << endl;
    cout << "| Email: " << uemail << "    |" << endl;
    cout << "| Premium: " << upremium << "                            |" << endl;
    cout << "| Age: " << uage << "                               |" << endl;
    cout << "-----------------------------------------" << endl;
}
