#include <bits/stdc++.h>
#include <vector>
#define for(i, n) for (int i = 0; i < n; i++)
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
        if (num >= 127)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
