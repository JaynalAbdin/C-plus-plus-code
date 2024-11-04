#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    int marks1, marks2;
    Person(string nm, int ag, int mr1, int mr2)
    {
        name = nm;
        age = ag;
        marks1 = mr1;
        marks2 = mr2;
    }
    int total_marks()
    {
        return marks1 + marks2;
    }
};

int main()
{
    Person student("Jaynal Abdin", 28, 85, 45);
    cout << student.name << " " << student.age << endl;
    cout << "Total Marks: " << student.total_marks() << endl;
    return 0;
}