#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
#define fr(i, sz) for (ll i = 0; i <= sz; i++)
#define frn(i, n) for (ll i = 0; i < n; i++)
#define sp(a, b) swap(a, b)
#define pb push_back
using namespace std;

int opsMin(vector<ll> &box)
{
    ll ops = 0;
    ll posLast = -1;
    ll position = 1;
    ll sizeCell = box.size();
    frn(i, sizeCell)
    {
        if (box[i] == position)
        {
            if (posLast != -1)
            {
                ops += i - posLast - position;
            }
            posLast = i;
        }
    }
    return ops;
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
        cin >> n;
        vector<ll> box(n);
        frn(i, n)
        {
            cin >> box[i];
        }
        cout << opsMin(box) << endl;
    }
    return 0;
}
