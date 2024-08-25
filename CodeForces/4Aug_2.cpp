#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
#define fr(i, n) for (int i = 1; i < n; i++)
#define frn(i, n) for (ll i = 0; i < n; i++)
#define srt(vec) sort(vec.begin(), vec.end())
#define sp(a, b) swap(a, b)
#define pb push_back
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    frn(i, n) cin >> a[i];

    ll lodd = 0;
    ll levn = 0;

    frn(i, n)
    {
        if (a[i] % 2 == 1 && a[i] > lodd)
            lodd = a[i];
        if (a[i] % 2 == 0 && a[i] > levn)
            levn = a[i];
    }

    int operations_count = 0;
    bool all_same_parity = true;
    fr(i, n)
    {
        if (a[i] % 2 != a[0] % 2)
        {
            all_same_parity = false;
            break;
        }
    }

    if (all_same_parity)
    {
        cout << 0 << endl;
        return;
    }

    sort(a.begin(), a.end());
    frn(i, n)
    {
        if (a[i] % 2 == 0 && a[i] < lodd)
        {
            operations_count++;
            a[i] += lodd;
            lodd = max(lodd, a[i]);
        }
    }

    all_same_parity = true;
    fr(i, n)
    {
        if (a[i] % 2 != a[0] % 2)
        {
            all_same_parity = false;
            break;
        }
    }

    if (all_same_parity)
    {
        cout << operations_count << endl;
        return;
    }

    ll lodInd = 0;
    frn(i, n)
    {
        if (a[i] % 2 == 1 && a[i] == lodd)
        {
            lodInd = i;
            break;
        }
    }

    a[lodInd] = lodd + levn;
    operations_count++;

    frn(i, n)
    {
        if (a[i] % 2 == 0)
        {
            operations_count++;
        }
    }

    cout << operations_count << endl;
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
