#include <iostream>
using namespace std;

int main() 
{
	int testcase;
	cin >> testcase;
	while (testcase--)
	{
		int input, counting=0;
		cin >> input;
		int a[input];
		for (int in=0; in<input; in++) cin >> a[in];
		for (int in=0; in<input; in++)
		{
			int sum=0, product=1;
			for (int jp=in; jp<input; jp++)
			{
				sum+=a[jp];
				product*=a[jp];
				if (sum==product) counting++;
			}
		}
		cout << counting << endl;
		
	}
	return 0;
}