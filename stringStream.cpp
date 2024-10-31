#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    // ss >> word;
    // cout << word << endl;
    // cout << s << endl;
    while (ss >> word)
    {
        cout << word << endl;
    }

    return 0;
}