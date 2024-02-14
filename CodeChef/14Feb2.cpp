#include <bits/stdc++.h>
#include <vector>
#define st(b, n) sort(b, b + n);
#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

using namespace std;

int main()
{
    /* vector<string> name(vector<ll>& arr)
    {
    ll n = arr.size();
    } 	*/
    ll testc;
    cin >> testc;
    while (testc--)
    {
        ll one = 1;
        ll two = 2;
        ll zero = 0;
        ll num;
        cin >> num;
        ll a[num];
        f(i, num)
        {
            cin >> a[i];
        }
        if (num == one)
        {
            cout << "YES" << endl;
        }
        else if (num == two)
        {
            if (a[zero] > a[one])
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else if (num == 3)
        {
            ll b[3];
            b[zero] = a[zero];
            b[one] = a[one];
            b[two] = a[two];
            ll n = 3;
            st(b, n)

                if (b[one] == a[one])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
