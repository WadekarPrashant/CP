#include<iostream>
using namespace std;

int main(){
    int testcase;
	cin>>testcase;
	
	while(testcase--)
{
		
int NumerA;
int NumerB;
int integer;
cin>>NumerA;
cin>>NumerB;
cin>>integer;
		
if(NumerA <= NumerB)
{
	
	if((NumerB - NumerA) % (integer * 2) == 0)
    {
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}
else{
	if((NumerB - NumerA) % (integer * 2) == 0)
    {
		cout<<"YES"<<endl;	
	}
	else{
		cout<<"NO"<<endl;
	}
}
}

	return 0;
}