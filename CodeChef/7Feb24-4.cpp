#include <bits/stdc++.h>
#include <vector>
// #define for(i, n) for (int i = 0; i < n; i++)
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
        ll num;
        cin >> num;
        vector<long long> vect;
        for (int i = 0; i < num; i++)
        {
            ll vecn;
            cin >> vecn;
            vect.push_back(vecn);
        }
        vector<long long> vect1(num + 1, 0);
        for (int i = 0; i < num; i++)
        {
            ll tem = i;
            ll add = 0;
            ll cond1 = (tem < num);
            ll cond2 = (add <= num);
            while (tem < num && add <= num)
            {
                add = add + vect[tem];
                if (add > num)
                    break;
                vect1[add]++;
                tem++;
            }
        }
        ll num1 = num + 1;
        for (int i = 1; i < num1; i++)
        {
            ll ans = vect1[i];
            cout << vect1[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}
