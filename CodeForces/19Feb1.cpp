#include <bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;

string solveWinner(const string &inpStr)
{
    int A = 0;
    int B = 0;
    for (char c : inpStr)
    {
        if (c == 'A')
        {
            A++;
        }
        else
        {
            B++;
        }
    }

    if (A > B)
    {
        return "A";
    }
    else if (B > A)
    {
        return "B";
    }
    else
    {
        return "A";
    }
}

int main()
{
    int testc;
    cin >> testc;
    while (testc--)
    {
        string inpStr;
        cin >> inpStr;
        cout << solveWinner(inpStr) << endl;
    }

    return 0;
}
