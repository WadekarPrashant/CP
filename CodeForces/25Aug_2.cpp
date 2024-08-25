#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#define ll long long
#define fr(i, sz) for (ll i = 0; i <= sz; i++)
#define frn(i, n) for (ll i = 0; i < n; i++)
#define srt(vec) sort(vec.begin(), vec.end())
#define sp(a, b) swap(a, b)
#define pb push_back
using namespace std;

int solve(int n, vector<int> &a)
{
    srt(a);
    int x = n / 2;
    return a[x];
}

int main()
{
    ll testc;
    cin >> testc;
    while (testc--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        frn(i, n) cin >> a[i];
        cout << solve(n, a) << endl;
    }
    return 0;
}
