#include <iostream>
#include <vector>
#include <set>
#include <bits/stdc++.h>
#define ll long long
#define fr(i, sz) for (ll i = 0; i <= sz; i++)
#define frn(i, n) for (ll i = 0; i < n; i++)
#define srt(vec) sort(vec.begin(), vec.end())
#define sp(a, b) swap(a, b)
#define pb push_back
using namespace std;

ll sum(ll x)
{
    return x * (x + 1) / 2;
}

ll gap(ll l, ll r)
{
    return sum(r) - sum(l - 1);
}

void solve(ll n, ll m)
{
    ll s = 0;
    ll soln = 0;
    frn(i, n)
    {
        ll l;

        cin >> l;
        set<ll> t;
        frn(j, l)
        {
            ll x;
            cin >> x;
            t.insert(x);
        }
        bool flag = true;
        for (ll i = 0;; ++i)
        {
            if (!t.count(i))
            {
                if (flag)
                    flag = false;
                else
                {
                    s = max(s, i);
                    break;
                }
            }
        }
    }
    if (m <= s)
    {
        soln = s * (m + 1);
    }
    else
    {
        soln = s * (s + 1) + gap(s + 1, m);
    }
    cout << soln << endl;
}

int main()
{
    ll T;
    cin >> T;
    while (T--)
    {
        ll n, m;
        cin >> n >> m;
        solve(n, m);
    }
    return 0;
}
