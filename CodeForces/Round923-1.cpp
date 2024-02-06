#include <bits/stdc++.h>
#define for(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
    int testc;
    cin >> testc;
    while (testc--)
    {
        int num = -1;
        int l = -1;
        int r = -1;
        int n;
        cin >> n;
        string input;
        cin >> input;
        for (i, n)
        {
            if (input[i] == 'B' && l == num)
            {
                l = i;
            }
            if (input[i] == 'B' && l != num)
            {
                r = i;
            }
        }
        int ans = (r - l + 1);
        cout << ans << endl;
    }
    return 0;
}
