#include <iostream>
#include <vector>
#include <string>
#define ll long long
#define fr(i, sz) for (ll i = 0; i <= sz; i++)
#define frn(i, n) for (int i = 0; i < n - 1; i++)
#define srt(vec) sort(vec.begin(), vec.end())
#define sp(a, b) swap(a, b)
#define pb push_back
using namespace std;

string solve(int n, string s)
{
    if (s[0] != s[n - 1])
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    ll testc;
    cin >> testc;
    while (testc--)
    {
        int n;
        string s;
        cin >> n >> s;
        cout << solve(n, s) << endl;
    }
    return 0;
}
