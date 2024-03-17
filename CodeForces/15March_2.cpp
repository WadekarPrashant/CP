#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
#define fr(i, sz) for (ll i = nms.size() - 2; i >= 0; i--)
#define frn(i, n) for (ll i = 0; i < n; i++)
#define srt(vec) sort(vec.begin(), vec.end())
#define sp(a, b) swap(a, b)
#define pb push_back

using namespace std;

bool isValid(vector<int> &nms)
{
    ll first = 10;
    bool check = false;
    fr(i, sz)
    {
        if (nms[i + 1] >= nms[i])
            continue;
        if (nms[i] < first)
        {
            check = true;
            break;
        }
        ll left = nms[i];
        ll rem = left % first;
        left = left / first;
        if (nms[i + 1] >= rem && left <= rem)
        {
            nms[i] = left;
        }
        else
        {
            check = true;
            break;
        }
    }
    return !check;
}

void poss()
{
    ll n;
    cin >> n;
    vector<int> num;
    frn(i, n)
    {
        ll x;
        cin >> x;
        num.pb(x);
    }
    if (isValid(num))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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
        ll n = arr.size();
        } 	*/
        poss();
    }
    return 0;
}