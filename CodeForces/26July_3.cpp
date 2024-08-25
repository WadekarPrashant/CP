#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
#define fr(i, sz) for (ll i = 0; i <= sz; i++)
#define frn(i, n) for (ll i = 0; i < n; i++)
#define srt(vec) sort(vec.begin(), vec.end())
#define sp(a, b) swap(a, b)
#define pb push_back
using namespace std;

const int ONE = 1;
const int ZERO = 0;

vector<int> get_freq(const vector<vector<int>> &pre_sum, int l, int r)
{
    vector<int> frq(26, ZERO);
    frn(i, 26)
    {
        frq[i] = pre_sum[r][i] - (l > ZERO ? pre_sum[l - ONE][i] : ZERO);
    }
    return frq;
}

int min_ops_to_match(const vector<int> &frq_a, const vector<int> &frq_b)
{
    int ops = ZERO;
    frn(i, 26)
    {
        ops += abs(frq_a[i] - frq_b[i]);
    }
    return ops / 2;
}

void solve()
{
    ll len, qry;
    cin >> len >> qry;

    string str_a, str_b;
    cin >> str_a >> str_b;

    vector<vector<int>> pre_sum_a(len, vector<int>(26, ZERO));
    vector<vector<int>> pre_sum_b(len, vector<int>(26, ZERO));

    frn(i, len)
    {
        if (i > ZERO)
        {
            frn(j, 26)
            {
                pre_sum_a[i][j] = pre_sum_a[i - ONE][j];
                pre_sum_b[i][j] = pre_sum_b[i - ONE][j];
            }
        }
        pre_sum_a[i][str_a[i] - 'a']++;
        pre_sum_b[i][str_b[i] - 'a']++;
    }

    frn(i, qry)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        vector<int> frq_a = get_freq(pre_sum_a, l, r);
        vector<int> frq_b = get_freq(pre_sum_b, l, r);

        int ops = min_ops_to_match(frq_a, frq_b);
        cout << ops << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
