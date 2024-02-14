#include <bits/stdc++.h>
#include <vector>

#define ll long long
#define fr(i, n) for (ll i = 0; i < n; i++)
using namespace std;

ll calcShift(ll diff)
{
    ll div = 3;
    ll bdiff = 52;
    ll cdiff = 26;
    ll zero = 0;
    ll one = 1;
    ll rem = diff % div;

    if (rem == zero)
        return diff / div;
    else if (rem == one)
        return (diff + cdiff) / div;
    else
        return (diff + bdiff) / div;
}
ll calcDiff(char s, char ss)
{
    ll diff = ss - s;
    ll cdiff = 26;
    if (diff < 0)
        diff += cdiff;
    return diff;
}

int main()
{
    ll testc;
    cin >> testc;
    while (testc--)
    {
        ll n;
        cin >> n;
        string s, ss;
        cin >> s >> ss;
        vector<ll> a(n, 0);
        for (ll i = 0; i < n; i++)
        {
            ll diff = calcDiff(s[i], ss[i]);
            a[i] = calcShift(diff);
        }
        fr(i, n)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
