#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int testcase;
	cin>>testcase;
	while(testcase--){
	int integer=0;
    int josh=0;
    int keep=0;
    int cannot=1;
	int number;

	cin>>number;
	int a[number][number];
	memset(a, 0, sizeof(a));

	while(josh!=number){
	integer=0;
	josh=keep;
	a[integer][keep]=cannot;
	cannot++;
	while(josh!=0)
    {
		josh--;
		integer++;
		
		a[integer][josh]=cannot;
		cannot++;
	}
	keep++;
	josh=keep;
	}
	integer=1;
    josh=number-1, keep=1;
	while(keep<number){
	    integer=keep;
	    josh=number-1;
	    while(integer<number)
        {
	    a[integer][josh]=cannot;
	    cannot++;
	    josh--;
	    integer++;
	}
	keep++;
	}
	
	for(int p=0;p<number;p++){
		for(int q=0;q<number;q++)
        {
            
			cout<<a[p][q]<<" ";
		}
		cout<<endl;
	}
}
	return 0;
}