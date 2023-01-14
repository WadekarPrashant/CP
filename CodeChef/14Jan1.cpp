#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin>>tc;
	while(tc--){
	    int a;
	    cin>>a;
	    if(a<= 70){
	        cout<<"0"<<endl;
	    }
	    else if( 70 < a && a <= 100){
	        cout<<"500"<<endl;
	    }
	    else if(a > 100){
	        cout<<"2000"<<endl;
	    }
	}
	return 0;
}
