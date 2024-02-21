#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
#define fr(i, sz) for (ll i = 0; i <= sz; i++)
#define frn(i, n) for (ll i = 0; i < n; i++)
#define sp(a, b) swap(a, b)
#define pb push_back
using namespace std;

ll calculatePoints(ll run, ll wic)
{
    return run + (wic * 20);
}

ll findMofM(const vector<pair<ll, ll>> &plScore)
{
    ll maxScore = -1;
    ll mOFm = -1;

    frn(i, plScore.size())
    {
        ll score = calculatePoints(plScore[i].first, plScore[i].second);
        if (score > maxScore)
        {
            maxScore = score;
            mOFm = i + 1;
        }
    }

    return mOFm;
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
        vector<pair<ll, ll>> plScore(22);

        frn(i, 22)
        {
            cin >> plScore[i].first >> plScore[i].second;
        }

        ll mOFm = findMofM(plScore);

        cout << mOFm << endl;
    }

    return 0;
}
