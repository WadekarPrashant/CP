#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
#define fr(i, sz) for (ll i = 0; i <= sz; i++)
#define frn(i, n) for (int i = 0; i < n; i++)
#define srt(vec) sort(vec.begin(), vec.end())
#define sp(a, b) swap(a, b)
#define pb push_back

using namespace std;
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

        vector<int> a(n, 0);
        for (auto &i : a)
            cin >> i;

        ll ans = 0;
        map<int, int> vect;

        for (auto it : a)
        {
            vect[it]++;
        }

        frn(i, n)
        {
            if (a[i] <= 3)
            {
                vect[a[i]]--;
                continue;
            }

            ll res = a[i];
            ll dnom = a[i] - 3;

            if (res % dnom != 0)
            {
                vect[a[i]]--;
                continue;
            }

            ll val = res / dnom;

            if ((val) == a[i])
            {
                if (vect[val] - 1 > 0)
                {
                    ans += vect[val] - 1;
                }
            }
            else
            {
                if (vect[val] > 0)
                {
                    ans += vect[val];
                }
            }

            vect[a[i]]--;
        }
        ll solution = ans;
        cout << solution << endl;
    }
    return 0;
}