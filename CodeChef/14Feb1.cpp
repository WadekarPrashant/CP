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
        if (n <= 2)
        {
            cout << "1"
                 << " "
                 << "1";
        }
        else
        {
            cout << ceil(n / 2.00) << " " << ceil(n / 3.0) << endl;
        }
    }

    return 0;
}
