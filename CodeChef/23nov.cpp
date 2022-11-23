#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin>>testcases;
	while(testcases--){
	    int a,b,c;
	    cin>>a>>b>>c;
        int zero = 0;
	    int measure = zero;
        int one = 1;
	    while(a!=one){
	        a/=2;
	        measure++;
	    }
        int cnb = measure*b;
        int cnc = measure *c;
	    cout<< cnb+ cnc - c<<endl;
	}
	return 0;
}
