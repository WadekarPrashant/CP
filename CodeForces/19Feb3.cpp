#include <bits/stdc++.h>
#include <vector>
#include <string>
#define ll long long
#define fr(i, size) for (int i = 0; i <= size; i++)
using namespace std;

ll digitSum(ll largN)
{
    ll digiSum = 0;
    while (largN > 0)
    {
        ll digit = largN % 10;
        largN /= 10;
        digiSum += digit;
    }
    return digiSum;
}

vector<ll> digiSum()
{
    const ll largN = 2 * 1e5;
    vector<ll> dp(largN + 1, 0);
    ll digiSum = 0;
    fr(i, largN)
    {
        digiSum += digitSum(i);
        dp[i] = digiSum;
    }
    return dp;
}

int main()
{
    vector<ll> dp = digiSum();

    ll testc;
    cin >> testc;
    while (testc--)
    {
        ll largN;
        cin >> largN;
        cout << dp[largN] << endl;
    }

    return 0;
}
