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

ll minAnim(ll num)
{
    return (num / 4) + (num % 4 != 0);
}

int main()
{
    ll testc;
    cin >> testc;
    while (testc--)
    {
        ll n;
        cin >> n;
        cout << minAnim(n) << endl;
    }
    return 0;
}
