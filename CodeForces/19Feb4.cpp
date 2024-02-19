#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <cmath>
#include <map>
#define ll long long
#define fr(i, sz) for (ll i = 0; i <= sz; i++)
#define frn(i, n) for (ll i = 0; i < n; i++)
#define sp(a, b) swap(a, b)
#define pb push_back

using namespace std;

bool isPrime(ll n)
{
    if (n == 1)
    {
        return false;
    }
    for (ll div = 2; div * div <= n; div++)
    {
        if (n % div == 0)
        {
            return false;
        }
    }
    return true;
}

class DSU
{
public:
    vector<ll> prnt, sz;
    void init(ll n)
    {
        prnt.resize(n);
        sz.assign(n, 1);
        frn(i, n)
            prnt[i] = i;
    }
    ll find(ll v)
    {
        if (v == prnt[v])
            return v;
        return prnt[v] = find(prnt[v]);
    }
    void unite(ll a, ll b)
    {
        a = find(a);
        b = find(b);
        if (a != b)
        {
            if (sz[a] < sz[b])
                sp(a, b);
            prnt[b] = a;
            sz[a] += sz[b];
        }
    }
};

int main()
{
    ll testc;
    cin >> testc;

    while (testc--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (auto &num : arr)
            cin >> num;

        ll sol = n;
        ll power = pow(2, 31);
        ll curr = power - 1;
        map<ll, ll> frq;
        for (auto num : arr)
            frq[num]++;

        vector<pair<ll, ll>> mkPair;
        frn(i, n)
            mkPair.pb({arr[i], curr ^ arr[i]});

        sol = 0;
        for (auto it : mkPair)
        {
            ll lft = it.first;
            ll rht = it.second;
            ll f1 = frq[lft];
            ll f2 = frq[rht];
            sol += max(f1, f2);
            frq[lft] = 0;
            frq[rht] = 0;
        }
        cout << sol << endl;
    }
    return 0;
}
