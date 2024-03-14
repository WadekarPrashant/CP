#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
#define fr(i, sz) for (ll i = 0; i <= sz; i++)
#define frn(i, n) for (ll i = 0; i < n; i++)
#define sp(a, b) swap(a, b)
#define pb push_back
using namespace std;

string find(ll N, ll M)
{
    ll match = N - 1;
    if (match >= M)
    {
        return "YES";
    }
    else
    {
        return "NO";
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
        lln = arr.size();
        } 	*/
        ll N, M;
        cin >> N >> M;
        string result = find(N, M);
        cout << result << endl;
    }
    return 0;
}