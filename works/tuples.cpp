#include <iostream>
#include <string>
#include <tuple>
using namespace std;

tuple <int, string> getPerson()
{
    return {25, "Alex"};
}

int main()
{
    auto [age, name] = getPerson();
    cout << name << " is " << age << "." << endl;
    return 0;
}
