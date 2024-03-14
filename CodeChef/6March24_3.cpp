#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
#define fr(i, N) for (int i = N - 1; i >= 0; --i)
#define frn(i, n) for (ll i = 0; i < n; i++)
#define sp(a, b) swap(a, b)
#define srt(vec) sort(vec.begin(), vec.end())
#define pb push_back

using namespace std;
int find(const vector<int> &leg)
{
    int N = leg.size();
    int takeMax = 0;
    fr(i, N)
    {
        int temp = N - i;
        int tWeigh = leg[i] * temp;
        takeMax = max(takeMax, tWeigh);
    }
    return takeMax;
}
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
        int N;
        cin >> N;

        vector<int> leg(N);
        frn(i, N)
        {
            cin >> leg[i];
        }
        srt(leg);
        int ans = find(leg);
        cout << ans << endl;
    }

    return 0;
}
