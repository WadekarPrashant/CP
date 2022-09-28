#include<iostream>
using namespace std;

int main(){
	
	int testcase;

	cin>>testcase;
	
	while(testcase--){
		int Target;
        int Score;
		cin>>Target;
        cin>>Score;
		
		int ans = Target - Score;
		
		cout<<ans<<endl;
	}
	
	return 0;
}