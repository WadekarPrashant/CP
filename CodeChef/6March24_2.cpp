#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
#define fr(i, sz) for (ll i = 0; i <= sz; i++)
#define frn(i, n) for (ll i = 0; i < n; i++)
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
        int n;
        cin >> n;

        string found = bitset<32>(n).to_string();

        int sum = 0;
        int start = 0;
        int first = 2;
        for (char &c : found)
        {
            if (c == '1')
                sum++;
        }

        if (sum % first == start)
        {
            // return "even";
            cout << "Even" << endl;
        }
        else
        {
            cout << "odd" << endl;
            // return "odd";
        }

        // cout << result << endl;
    }
    return 0;
}
