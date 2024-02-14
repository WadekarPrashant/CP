#include <bits/stdc++.h>
#include <vector>

#define ll long long
#define fr(i, n) for (ll i = 0; i < n; i++)
using namespace std;

int main()
{
    /* vector<string> name(vector<ll>& arr)
    {
    ll n = arr.size();
    } 	*/

    ll testc = 1;
    cin >> testc;
    while (testc--)
    {
        ll n;
        cin >> n;
        string s, ss;
        cin >> s >> ss;
        vector<ll> a(n, 0);
        for (ll i = 0; i < n; i++)
        {
            if (ss[i] > s[i])
            {
                ll f = ss[i] - s[i];
                ll ff = f % 3;
                if (ff == 0)
                {
                    a[i] = (f / 3);
                }
                else if (ff == 1)
                {
                    a[i] = ((f + 26) / 3);
                }
                else
                {
                    a[i] = ((f + 52) / 3);
                }
            }
            else if (ss[i] < s[i])
            {
                ll f = ss[i] - s[i] + 26;
                ll ff = f % 3;
                if (ff == 0)
                {
                    a[i] = (f / 3);
                }
                else if (ff == 1)
                {
                    a[i] = ((f + 26) / 3);
                }
                else
                {
                    a[i] = ((f + 52) / 3);
                }
            }
        }
        fr(i, n)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}