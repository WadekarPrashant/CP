#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x, y, z;
        cin >> a >> b >> x >> y;
        if (a == b)
        {
            cout << "YES" << endl;
        }
        else if (a < b)
        {
            z = b - a;
            if (z > x)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else if (a > b)
        {
            z = a - b;
            if (z > y)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
    return 0;
}