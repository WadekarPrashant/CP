#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
#define fr(i, sz) for (ll i = 0; i <= sz; i++)
#define frn(i, n) for (ll i = 0; i < n; ++i)
#define srt(vec) sort(vec.begin(), vec.end())
#define sp(a, b) swap(a, b)
#define pb push_back
using namespace std;

int minOperations(vector<int> &a)
{
    int siz = a.size();
    int first = 1;
    int n = siz;
    int ans = 0;
    frn(i, n)
    {
        if (a[i] == i + first)
        {
            ans++;
            i++;
        }
    }
    return ans;
}

int main()
{
    ll testc;
    cin >> testc;
    while (testc--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;
        int result = minOperations(a);
        cout << result << endl;
    }
    return 0;
}
