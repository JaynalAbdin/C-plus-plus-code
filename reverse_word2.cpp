#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    string rslt;
    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        if (!rslt.empty())
        {
            rslt += " ";
        }
        rslt += word;
    }
    cout << rslt << endl;
    return 0;
}