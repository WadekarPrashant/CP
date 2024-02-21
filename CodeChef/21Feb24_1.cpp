#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
#define fr(i, sz) for (ll i = 0; i <= sz; i++)
#define frn(i, n) for (ll i = 0; i < n; i++)
#define sp(a, b) swap(a, b)
#define pb push_back
using namespace std;

bool findGood(const vector<int> &scores)
{
    for (int score : scores)
    {
        if (score <= 4)
        {
            return false;
        }
    }
    return true;
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
        int n;
        cin >> n;

        vector<int> vect(n);
        frn(i, n)
        {
            cin >> vect[i];
        }

        bool good = findGood(vect);
        cout << (good ? "YES" : "NO") << endl;
    }
    return 0;
}
