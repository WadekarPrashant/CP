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

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);

    frn(i, n) cin >> a[i];
    frn(i, n) cin >> b[i];

    ll ft = 1;
    ll bt = 1;

    frn(i, n)
    {
        if (a[i] != b[i])
            ft = 0;
    }

    if (ft == 1)
    {
        cout << "Bob" << endl;
        return;
    }

    frn(i, n)
    {
        if (a[i] != b[n - i - 1])
            bt = 0;
    }

    if (bt == 1)
    {
        cout << "Bob" << endl;
        return;
    }

    cout << "Alice" << endl;
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
