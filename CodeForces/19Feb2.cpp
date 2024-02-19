#include <bits/stdc++.h>
#include <vector>
#include <string>
#define cnb() cnt.begin()
#define cne() cnt.end()
#define pb(n) push_back(n)
#define fr(i, size) for (int i = 0; i < size; i++)

using namespace std;

vector<int> cntOnes(const vector<string> &vect)
{
    vector<int> cnt;
    for (const string &row : vect)
    {
        int cnt1 = 0;
        for (char cell : row)
        {
            if (cell == '1')
            {
                cnt1++;
            }
        }
        if (cnt1 != 0)
        {
            cnt.pb(cnt1);
        }
    }
    return cnt;
}

string find_shape(const vector<int> &cnt)
{
    if (cnt.empty())
    {
        return "NONE";
    }
    if (all_of(cnb(), cne(), [&](int count)
               { return count == cnt[0]; }))
    {
        return "SQUARE";
    }
    return "TRIANGLE";
}

int main()
{

    /* vector<string> name(vector<ll>& arr)
    {
    ll n = arr.size();
    } 	*/
    int testc;
    cin >> testc;
    while (testc--)
    {
        int size;
        cin >> size;
        vector<string> vect(size);

        fr(i, size)
        {
            cin >> vect[i];
        }

        vector<int> cnt = cntOnes(vect);

        sort(cnb(), cne());

        cout << find_shape(cnt) << endl;
    }

    return 0;
}
