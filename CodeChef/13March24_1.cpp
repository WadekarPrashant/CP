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

char gg(int at, int mks)
{
    if (at < 50)
        return 'Z';
    else if (mks < 50)
        return 'F';
    else
        return 'A';
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
        int at, mks;
        cin >> at >> mks;
        char grade = gg(at, mks);
        cout << grade << endl;
    }
    return 0;
}