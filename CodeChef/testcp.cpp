#include <bits/stdc++.h>
using namespace std;
// STAY CALM

#define int long long int
#define vi vector<int>
#define read(a)       \
    for (auto &i : a) \
    cin >> i
// #define mod 998244353
#define mod 1000000007

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    // sieve();
    while (t--)
    {
        int n;
        cin >> n;
        // 101
        int cnt = 0;
        int pos = 0;
        for (int i = 31; i >= 0; i--)
        {
            if (n & (1LL << i))
            {
                if (pos == 0)
                {
                    pos = i;
                }
                if (cnt == 0 or cnt == 2)
                {
                    cnt++;
                }
            }
            else
            {
                if (cnt == 1)
                {
                    cnt = 2;
                }
            }
        }
        if (cnt != 3)
        {
            cout << 0 << endl;
            continue;
        }
        // 111100000
        int curnum = 0;
        int ans = 1e18;
        // cout<<pos<<endl;
        for (int i = pos; i >= 0; i--)
        {
            curnum = curnum + pow(2, i);
            // cout<<curnum<<endl;
            if (curnum < n)
            {
                continue;
            }
            ans = min(ans, curnum - n);
        }
        cout << ans << endl;
    }

    return 0;
}