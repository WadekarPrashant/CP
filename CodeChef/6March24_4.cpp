#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
#define fr(i, num) for (ll i = z - 1; i < num; i++)
#define frn(i, n) for (ll i = 0; i < n; i++)
#define frm(c) for (char c = 'a'; c <= 'z'; c++)
#define sp(a, b) swap(a, b)
#define pb push_back

using namespace std;
ll findMin(string s)
{
    ll num = s.size();
    ll n = 0;
    map<char, ll> mp;

    frn(i, num)
    {
        mp[s[i]]++;
    }
    ll ans = num;
    frm(c)
    {
        if (mp[c] > n)
        {
            vector<ll> vect(num);

            int cnt = n;
            ll z = mp[c];

            frn(i, num)
            {
                if (s[i] == c)
                    cnt++;
                vect[i] = cnt;
            }

            fr(i, num)
            {
                ll y = vect[i];
                if (i - z >= n)
                {
                    ll temp = vect[i - z];
                    y = y - temp;
                }
                ll cal = (mp[c] - y);
                ans = min(ans, cal);
            }
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
        /* vector<string> name(vector<int>& arr)
        {
        int n = arr.size();
        } 	*/
        string s;
        cin >> s;
        cout << findMin(s) << endl;
    }
    return 0;
}