#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
#define fr(i, n, k) for (ll i = 0; i < n; i += k)
#define frn(i, n) for (ll i = 0; i < n; i++)
#define srt(vec) sort(vec.begin(), vec.end())
#define sp(a, b) swap(a, b)
#define pb push_back
using namespace std;

vector<string> gridRed(ll n, ll k, vector<string> &grid)
{
    vector<string> redGrid(n / k, string(n / k, '0'));
    fr(i, n, k)
    {
        fr(j, n, k)
        {

            redGrid[i / k][j / k] = grid[i][j];
        }
    }
    return redGrid;
}

int main()
{
    ll testc;
    cin >> testc;
    while (testc--)
    {
        ll n, k;
        cin >> n >> k;
        vector<string> grid(n);
        frn(i, n)
        {
            cin >> grid[i];
        }

        vector<string> solution = gridRed(n, k, grid);
        for (const string &r : solution)
        {
            cout << r << endl;
        }
    }
    return 0;
}
