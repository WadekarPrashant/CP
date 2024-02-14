#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    /* vector<string> name(vector<int>& arr)
    {
    int n = arr.size();
    } 	*/
    int testc;
    cin >> testc;
    while (testc--)
    {
        int n;
        cin >> n;
        cout << ceil(n / 2) << " " << ceil(n / 3) << endl;
    }

    return 0;
}
