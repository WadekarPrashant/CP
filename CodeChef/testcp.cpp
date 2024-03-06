#include <iostream>
#include <vector>

using namespace std;

int getNumPairs(const vector<int> &arr, int l, int r)
{
    int count = 0;
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = arr[i] + arr[j];
            if (sum >= l && sum <= r)
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    int n, l, r;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> l >> r;

    int result = getNumPairs(arr, l, r);
    cout << result << endl;

    return 0;
}