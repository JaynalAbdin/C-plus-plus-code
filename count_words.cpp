#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    for (char &ch : s)
    {
        if (ch == ',' || ch == '.' || ch == '!' || ch == '?')
        {
            ch = ' ';
        }
    }
    stringstream ss(s);
    string word;
    int count = 0;
    while (ss >> word)
    {
        bool isWord = true;
        for (char ch : word)
        {
            if (!isalpha(ch))
            {
                isWord = false;
                break;
            }
        }
        if (isWord)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}