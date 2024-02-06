#include <bits/stdc++.h>
#define ll long long
// #define for(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
    ll testc;
    cin >> testc;
    while (testc--)
    {
        ll num;
        cin >> num;
        vector<int> vect;
        for (int i = 0; i < num; i++)
        {
            ll x;
            cin >> x;
            vect.push_back(x);
        }

        map<char, int> map1;
        string ans = "";
        ll count = 0;
        for (int i = 0; i < num; i++)
        {
            if (vect[i] != 0)
            {
                int vect1 = vect[i];
                for (auto it = map1.begin(); it != map1.end(); ++it)
                {
                    auto p = *it;
                    if (p.second == vect1)
                    {
                        ans += p.first;
                        map1[p.first] += 1;
                        break;
                    }
                }
            }
            else
            {
                char characterToAdd = 'a' + count;
                ans += characterToAdd;
                map1[characterToAdd] += 1;
                count++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}