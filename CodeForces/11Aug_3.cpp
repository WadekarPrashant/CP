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
    vector<pair<ll, ll>> pts(n);

    frn(i, n)
    {
        cin >> pts[i].first >> pts[i].second;
    }

    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    ll xsqd = x2 - x1;
    ll ysqd = y2 - y1;
    ll comp = xsqd * xsqd + ysqd * ysqd;

    ll flag = 0;
    frn(i, n)
    {
        ll xsq = x2 - pts[i].first;
        ll ysq = y2 - pts[i].second;

        ll temp = xsq * xsq + ysq * ysq;

        if (comp >= temp)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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
