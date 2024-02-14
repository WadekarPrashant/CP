#include <bits/stdc++.h>
#include <vector>

#define fr(i, n) for (ll i = 0; i < n; i++)
#define ll long long
#define pb(i) push_back(vect[i])
#define pub(i) push_back(i)
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
        ll num1 = 1e5 + 5 * (1e4);
        ll arc[num1 + 1];
        ll one = 1;
        ll zero = 0;
        fr(i, num1 + one) arc[i] = 0;
        ll two = 2;
        for (ll i = two; i <= num1; i++)
        {
            if (arc[i] == zero)
            {
                vect.pub(i);
                for (ll j = i * i; j <= num1; j += i)
                    arc[j] = i;
            }
        }
        ll num;
        cin >> num;

        ll num2 = num / 2;
        ll i = 0;
        vector<ll> sol;
        while (num2--)
        {
            sol.pb(i);
            sol.pb(i);
            i = i + 1;
        }

        if (num % 2 == one)

            sol.push_back(1);
        fr(i, sol.size())
        {
            cout << sol[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
