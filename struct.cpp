#include <iostream>
using namespace std;

// grouping elements together of different data types.

struct Person
{
    string name;
    int age;
    string major;
};

int main()
{
    Person P1;
    P1.name = "G.2.0";
    P1.age = 21;
    P1.major = "Business man";

    cout << "Name;" << P1.name << endl;
    cout << "Age;" << P1.age << endl;
    cout << "Major;" << P1.major << endl;

    return 0;
}