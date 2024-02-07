#include <bits/stdc++.h>
#include <vector>
#define pb(n) push_back(n)
#define ll long long

using namespace std;

int main()
{
    /* vector<string> name(vector<int>& arr)
    {
    int n = arr.size();
    } 	*/

    ll testc;
    cin >> testc;
    while (testc--)
    {

        vector<ll> vect;
        ll num;
        cin >> num;
        ll num1 = 2 * num;
        ll arr[num1];
        for (int i = 0; i < num1; i++)
        {
            cin >> arr[i];
        }
        map<ll, ll> mp1;
        for (int i = 0; i < num1; i++)
        {
            ll temp = 0;
            if (mp1[arr[i]] == temp)
            {
                vect.pb(arr[i]);
            }

            mp1[arr[i]]++;
        }
        for (int i = 0; i < num; i++)
        {
            cout << vect[i];
            cout << " ";
        }

        cout << '\n';
    }

    return 0;
}