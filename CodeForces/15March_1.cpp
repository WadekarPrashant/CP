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

void getStr(ll n, ll m)
{
    n = n / m;
    frn(i, n)
    {
        cout << "AAAB";
    }
    cout << '\n';
}

bool isPossible(ll n, ll m)
{
    ll firstLetter = 1;
    if (n % m == 0)
    {
        cout << "YES" << '\n';
        getStr(n, m);
        return true;
    }
    if (n == firstLetter)
    {
        cout << "NO" << '\n';
        return false;
    }
    else
    {
        cout << "NO" << '\n';
        return false;
    }
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
        ll n;
        ll m = 2;
        cin >> n;
        isPossible(n, m);
    }
    return 0;
}