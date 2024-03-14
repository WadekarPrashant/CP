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

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnt = 0;
    frn(i, n)
    {
        if (s[i] == '1')
        {
            cnt++;
        }
    }
    if (cnt > k)
    {
        for (int i = 0; i < n && k > 0; i++)
        {
            if (s[i] == '1')
            {
                s[i] = '0';
                k--;
            }
        }
        cout << s << endl;
    }
    else
    {
        frn(i, (n - k))
        {
            cout << 0;
        }
        cout << endl;
    }
}
int main()
{
    ll testc;
    cin >> testc;
    while (testc--)
    {
        /* vector<string> name(vector<int>& arr)
        {
        int n = arr.size();
        } 	*/
        solve();
    }
    return 0;
}