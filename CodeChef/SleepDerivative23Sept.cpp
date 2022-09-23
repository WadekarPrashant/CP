#include<iostream>


using namespace std;

int main(){
	// cout<<"Take test case as input"<<endl;
	int testcase;
	cin>>testcase;
	
	while(testcase--){
		int anything;
		cin>>anything;
		
		if(anything < 7){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
	}
	return 0;
}