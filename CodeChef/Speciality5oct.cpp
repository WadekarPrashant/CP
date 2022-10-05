#include<iostream>
using namespace std;

int main(){
    int testcase;
	cin>>testcase;
	
	while(testcase--){
		
		int input1;
        int input2;
        int input3;
		cin>>input1;
        cin>>input2;
        cin>>input3;
		
		if(input1 > input2 && input1 > input3)
        {
			cout<<"setter"<<endl;
		}else if(input2 > input1 && input2 > input3)
        {
			cout<<"tester"<<endl;
		}else{
			cout<<"editorialist"<<endl;
		}
	}
	
	return 0;
}