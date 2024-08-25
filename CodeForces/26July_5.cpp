#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
#define fr(i, sz) for (ll i = 0; i <= sz; ++i)
#define frn(i, n) for (ll i = 0; i < n; i++)
#define srt(vec) sort(vec.begin(), vec.end())
#define sp(a, b) swap(a, b)
#define pb push_back
using namespace std;

const int MOD = 1000000007;

ll solve(string &t)
{
    ll s = 1;
    ll frst = 1;
    ll n = t.size();
    vector<int> pre(n + 1, 0);
    unordered_map<int, ll> cnt;

    fr(i, n)
    {

        pre[i] = pre[i - frst] + (t[i - frst] == '1' ? 1 : -1);
    }

    fr(j, n)
    {
        cnt[pre[j - frst]] += j;
        s = (s + cnt[pre[j]] * (n - j + frst)) % MOD;
    }

    return s - 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll testc;
    cin >> testc;
    while (testc--)
    {
        string t;
        cin >> t;
        cout << solve(t) << endl;
    }
    return 0;
}
