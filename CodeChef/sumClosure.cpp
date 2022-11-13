#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin>>tc;
	while(tc--){
	    int x,y;
	    cin>>x>>y;
	    if(x>y){
	        cout<<"YES"<<endl;
	    }if(x<=y)
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
