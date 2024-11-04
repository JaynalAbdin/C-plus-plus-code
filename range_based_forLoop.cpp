#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    // traditional for loop
    for (int i = 0; i < s.size(); i++)
    {
        cout << i << endl;
    }
    // Range base for loop
    for (char c : s)
    {
        cout << c << endl;
    }
    // vector
    vector<int> v = {1, 2, 3, 4, 5};
    for (auto i : v)
    {
        cout << i << endl;
    }
    // iterating over whole array
    int a[] = {10, 20, 30, 40, 50};
    for (int n : a)
    {
        cout << n << endl;
    }

    return 0;
}