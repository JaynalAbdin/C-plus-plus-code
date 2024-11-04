#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

int main()
{
    Person *jaynal = new Person("Jaynal Abdin", 28);
    Person *gias = new Person("Gias Uddin Al", 29);
    *jaynal = *gias;
    delete gias;
    cout << jaynal->name << " " << jaynal->age << endl;

    return 0;
}