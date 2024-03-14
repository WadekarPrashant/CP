#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
#define fr(i, sz) for (ll i = 0; i <= sz; i++)
#define frn(i, n) for (ll i = 0; i < n; i++)
#define srt(vec) sort(vec.begin(), vec.end())
#define sp(a, b) swap(a, b)
#define pb push_back
using namespace std;

int fkmc(const string &s)
{
    int ones = 0;
    int zero = 0;
    int cnt = 0;
    for (char i : s)
    {
        if (i == '1')
        {
            cnt = 0;
            ones++;
        }
        else
        {
            cnt++;
            zero = max(zero, cnt);
        }
    }
    return ones + zero;
}

int main()
{
    ll testc;
    cin >> testc;
    while (testc--)
    {
        /* vector<string> name(vector<int>& arr)
        {
        int n = arr.size();
        } 	*/
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << fkmc(s) << endl;
    }
    return 0;
}