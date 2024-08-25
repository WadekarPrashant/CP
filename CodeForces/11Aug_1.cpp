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

ll solve(ll n, ll m, ll k)
{

    ll ans = min(n, k) * min(m, k);
    return ans;
}

int main()
{
    ll testc;
    cin >> testc;
    while (testc--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        cout << solve(n, m, k) << endl;
    }
    return 0;
}
