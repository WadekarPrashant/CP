#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
#define fr(i, sz) for (ll i = 0; i <= sz; i++)
#define frn(i, n) for (int i = 0; i < n - 1; i++)
#define srt(vec) sort(vec.begin(), vec.end())
#define sp(a, b) swap(a, b)
#define pb push_back
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n, 0);
    for (auto &i : a)
        cin >> i;
    srt(a);

    frn(i, n)
    {
        int maxi = a.back();
        int diff = maxi - a[i];
        diff = diff / k;
        diff = diff + diff % 2;
        a[i] = a[i] + diff * k;
    }

    sort(a.begin(), a.end());

    if (a[0] + k > a.back())
    {
        cout << a.back() << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    ll testc;
    cin >> testc;
    while (testc--)
    {
        solve();
    }
    return 0;
}
