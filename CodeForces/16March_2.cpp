#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
#define fr(i, n) for (ll i = n; i < 2 * n; i++)
#define frn(i, n) for (ll i = 0; i < n; i++)
#define srt(vec) sort(vec.begin(), vec.end())
#define sp(a, b) swap(a, b)
#define pb push_back
using namespace std;

void readArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

pair<vector<int>, vector<int>> processArray(int arr[], ll n, ll k)
{
    set<int> uniqueSet;
    map<int, int> freqMap1, freqMap2;
    vector<int> duplicates, remaining;

    frn(i, n)
    {
        uniqueSet.insert(arr[i]);
        freqMap1[arr[i]]++;
    }

    fr(i, n)
    {
        if (uniqueSet.find(arr[i]) != uniqueSet.end())
        {
            duplicates.pb(arr[i]);
        }
        freqMap2[arr[i]]++;
    }

    for (auto x : freqMap1)
    {
        if (x.second == 2 && k > 0)
        {
            duplicates.pb(x.first);
            duplicates.pb(x.first);
            k--;
        }
    }
    for (auto x : freqMap2)
    {
        if (x.second == 2 && k > 0)
        {
            duplicates.pb(x.first);
            duplicates.pb(x.first);
            k--;
        }
    }

    ll p = duplicates.size();
    frn(i, p)
    {
        if (k > 0)
        {
            remaining.pb(duplicates[i]);
            k--;
        }
    }

    return make_pair(duplicates, remaining);
}

void printVector(vector<int> v)
{
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}

signed main()
{
    ll testc;
    cin >> testc;
    while (testc--)
    {
        /* vector<string> name(vector<int>& arr)
        {
        int n = arr.size();
        } 	*/
        ll n, k;
        cin >> n >> k;
        int arr[2 * n];
        readArray(arr, 2 * n);
        auto result = processArray(arr, n, k);
        printVector(result.first);
        printVector(result.second);
    }
    return 0;
}