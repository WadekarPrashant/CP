#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

	// #ifndef first
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif

int main(){
    int testcase;
	cin>>testcase;
	
	while(testcase--)
{
		

		int NumerA, NumerB, integer;
		cin>>NumerA>>NumerB>>integer;
		
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