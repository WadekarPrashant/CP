#include <iostream>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--){
	    int taste,piece;
	    cin>>taste>>piece;
	    
	    if(taste*piece < 10){
	        cout<<"Chocolate"<<endl;
	    }
	    else if(taste*piece == 10){
	        cout<<"Either"<<endl;
	    }
	    else{
	        cout<<"Candy"<<endl;
	    }
	}
	return 0;
}