#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
#define fr(i, s) for (int i = 0; i < s.size(); i++)
#define frn(i, n) for (ll i = 0; i < n; i++)
#define srt(vec) sort(vec.begin(), vec.end())
#define sp(a, b) swap(a, b)
#define pb push_back
using namespace std;

int scr(int n, string s)
{
    int cntA = 0, cntB = 0, cntC = 0, cntD = 0;
    fr(i, s)
    {
        if (s[i] == 'A')
            cntA++;
        else if (s[i] == 'B')
            cntB++;
        else if (s[i] == 'C')
            cntC++;
        else if (s[i] == 'D')
            cntD++;
    }
    return min(cntA, n) + min(cntB, n) + min(cntC, n) + min(cntD, n);
}

int main()
{
    ll testc;
    cin >> testc;
    while (testc--)
    {
        int n;
        string s;
        cin >> n >> s;
        cout << scr(n, s) << endl;
    }
    return 0;
}
