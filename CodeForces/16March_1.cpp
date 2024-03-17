#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
#define fr(i, n) for (ll i = 0; i <= n; i++)
#define frn(i, n) for (ll i = 0; i < n; i++)
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
        /* vector<string> name(vector<int>& arr)
        {
        int n = arr.size();
        } 	*/
        ll n;
        cin >> n;
        int arr[n];
        frn(i, n)
        {
            cin >> arr[i];
        }
        vector<int> val(n + 1, 0);
        frn(i, n)
        {
            val[arr[i]]++;
        }
        int ans = 0;
        bool flag = true;
        fr(i, n)
        {
            if (val[i] == 0)
            {
                ans = i;
                break;
            }
            else if (val[i] == 1)
            {
                if (flag)
                {
                    flag = false;
                }
                else
                {
                    ans = i;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}