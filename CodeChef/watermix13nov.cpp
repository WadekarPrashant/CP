#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin>>tc;
	while(tc--){
	   // it --> initial temp
	   // rt --> required temp
	   // hw --> hot water && cw --> cold water
	    int it,rt,hw,cw;
	    cin>>it>>rt>>hw>>cw;
	    if(it<rt){
	        int add;
	        add = rt - it;
	        if(add<=hw){
	            cout<<"YES"<<endl;
	        }else{
	            cout<<"NO"<<endl;
	        }
	    }else if(it>rt){
            int remove;
            remove = it - rt;
            if(remove > cw){
                cout<<"NO"<<endl;}
                else{
                    cout<<"YES"<<endl;
                }
        }else if(it=rt){
            cout<<"YES"<<endl;
        }
	}
	return 0;
}
// 4
// 24 25 2 0
// 37 37 2 9
// 30 20 10 9
// 30 31 0 20

// yes
// yes 
// no
// no