#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    // string s2;
    cin >> s1;
    // cin >> s2;

    // s1 += s2;
    // s1.append(s2);
    // cout << s1 << endl;
    // cout << s2 << endl;
    // s1.push_back('A');
    // cout << s1 << endl;
    // s2.pop_back();
    // cout << s2 << endl;
    // s1.erase(3, 3);
    s1.replace(3, 3, "and");
    cout << s1 << endl;

    return 0;
}