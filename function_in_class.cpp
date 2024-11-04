#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string nm, int ag)
    {
        name = nm;
        age = ag;
    }
};

int main()
{
    Person student("Jaynal Abdin", 28);
    cout << student.name << " " << student.age;
    return 0;
}