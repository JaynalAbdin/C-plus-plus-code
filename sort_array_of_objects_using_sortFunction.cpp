#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
};
bool cmp(Student a, Student b)
{
    if (a.age < b.age)
        return true;
    else
        return false;
}
int main()
{
    Student a[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin, a[i].name);
        cin >> a[i].age;
        cin.ignore();
    }
    sort(a, a + 3, cmp);
    for (int i = 0; i < 3; i++)
    {
        cout << a[i].name << " " << a[i].age << endl;
    }
    return 0;
}