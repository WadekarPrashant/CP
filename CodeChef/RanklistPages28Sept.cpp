#include<iostream>
using namespace std;

int main(){
    int testcase;
	cin>>testcase;
	
	while(testcase--){
		int Rank;
		cin>>Rank;
		
		if(Rank % 25 == 0){
			cout<<Rank / 25<<endl;
		}else{
			cout<<(Rank / 25) + 1<<endl;
		}
	}
	
	return 0;
} 