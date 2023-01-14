#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin>>tc;
	while(tc--){
	    int a;
	    int b;
	    int c;
	    
	    cin>>a>>b>>c;
	    if(a*b < 0){
	        cout<<"yes"<<endl;
	    }
	    else if(b*c < 0){
	        cout<<"yes"<<endl;
	    }
	    else if(c*a < 0){
	        cout<<"yes"<<endl;
	    }
	    else {
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
