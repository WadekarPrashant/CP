#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
#define fr(i, sz) for (ll i = 0; i <= sz; i++)
#define frn(i, n) for (ll i = 0; i < n; i++)
#define sp(a, b) swap(a, b)
#define pb push_back
#define mod 1000000007

using namespace std;

ll cellsReach(ll rows, ll cols, ll x, ll y, ll jmpStr)
{
    ll cellReach = 0;

    ll cellR = 1;
    ll rht = cols - y;
    rht = rht / jmpStr;
    cellR += rht;
    ll lft = y - 1;
    lft = lft / jmpStr;
    cellR += lft;

    ll cellC = 1 + (rows - x) / jmpStr + (x - 1) / jmpStr;

    cellReach = cellR * cellC;

    return cellReach;
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
        ll rows, cols, x, y, jmpStr;
        cin >> rows >> cols >> x >> y >> jmpStr;

        ll result = cellsReach(rows, cols, x, y, jmpStr);
        ll sol = result;
        cout << sol << endl;
    }
    return 0;
}