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
    Person jaynal("Jaynal Abdin Khokan", 28);
    cout << jaynal.name << " " << jaynal.age << endl;
    return 0;
}