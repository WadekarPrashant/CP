#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
#define fr(i, sz) for (ll i = 0; i <= sz; i++)
#define frn(i, n) for (ll i = 0; i < n; i++)
#define sp(a, b) swap(a, b)
#define pb push_back
using namespace std;

bool surv(ll n, ll k, vector<ll> &helMon, vector<ll> &posMon)
{
    vector<pair<ll, ll>> mons;
    frn(i, n)
    {
        mons.pb({abs(posMon[i]), helMon[i]});
    }
    ll heal = 0;
    ll start = 1;
    sort(mons.begin(), mons.end());
    ll totHeal = heal;
    frn(i, n)
    {
        ll meas = mons[i].first;
        totHeal = totHeal + mons[i].second;
        ll dist = meas;
        ll sum = (totHeal + k - start);
        ll rnd = sum / k;
        if (rnd > dist)
            return false;
    }
    return true;
}

int main()
{
    ll testc;
    cin >> testc;
    while (testc--)
    {
        /* vector<string> name(vector<ll>& arr)
        {
        ll n = arr.size();
        } 	*/

        ll n, k;
        cin >> n >> k;
        vector<ll> helMon(n);
        vector<ll> posMon(n);
        frn(i, n)
        {
            cin >> helMon[i];
        }

        frn(i, n)
        {
            cin >> posMon[i];
        }

        if (surv(n, k, helMon, posMon))
        {
            cout << "Yes" << '\n';
        }
        else
        {
            cout << "No" << '\n';
        }
    }
    return 0;
}