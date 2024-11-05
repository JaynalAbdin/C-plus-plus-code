#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        unordered_set<char> solvedProblems;
        int balloons = 0;
        for (char problem : s)
        {
            if (solvedProblems.find(problem) == solvedProblems.end())
            {
                balloons += 2;
                solvedProblems.insert(problem);
            }
            else
            {
                balloons += 1;
            }
        }
        cout << balloons << endl;
    }

    return 0;
}