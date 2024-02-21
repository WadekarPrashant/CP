#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
#define fr(i, sz) for (ll i = sz; i >= 0; i--)
#define frn(i, n) for (ll i = 0; i < n; i++)
#define sp(a, b) swap(a, b)
#define pb push_back

using namespace std;

ll findMin(ll n)
{
    ll increm = 0;
    ll loc = 0;
    fr(i, 31)
    {
        if (n & (1LL << i))
        {
            if (loc == 0)
            {
                loc = i;
            }
            if (increm == 0 || increm == 2)
            {
                increm++;
            }
        }
        else
        {
            if (increm == 1)
            {
                increm = 2;
            }
        }
    }
    if (increm != 3)
    {
        return 0;
    }
    ll temp = 0;
    ll ans = LLONG_MAX;
    fr(i, loc)
    {
        temp += pow(2, i);
        if (temp < n)
        {
            continue;
        }
        ans = min(ans, temp - n);
    }
    return ans;
}
signed main()
{
    ll testc;
    cin >> testc;
    while (testc--)
    {
        /* vector<string> name(vector<ll>& arr)
        {
        ll n = arr.size();
        } 	*/
        ll n;
        cin >> n;
        ll minDiff = findMin(n);
        cout << minDiff << endl;
    }
    return 0;
}