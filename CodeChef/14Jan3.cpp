#include <iostream>
#include<cmath>

using namespace std;

int main() {
	// your code goes here
	int tc;
	cin>>tc;
	while(tc--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int placeA = (a*a)+(b*b);
	    int placeB = (c*c)+(d*d);
	   // int distA = 
	    if(placeA > placeB){
	        cout<<"ALEX"<<endl;
	    }
	    else if(placeA < placeB){
	        cout<<"BOB"<<endl;
	    }
	    else {
	        cout<<"EQUAL"<< endl;
	}
	}
	return 0;
}
