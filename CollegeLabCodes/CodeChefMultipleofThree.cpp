#include<iostream>
using namespace std;
int main(){
	unsigned long long int tin;
    unsigned long long int counting;
    unsigned long long int flaged;
    unsigned long long int joy,a[4];
    unsigned long long int bin;
	cin>>tin;
	unsigned long long int input,kar;
    unsigned long long int da,db;
	for(input=0;input<tin;input++){
		counting=0;
		flaged=0;
		cin>>kar>>da>>db;
		if(kar>3){
			if((da+db)%10==0){
				flaged=1;
			}
			else{
				counting=db+da;
				counting=counting%10;
				bin=counting;
				counting=db+da+counting;
				if(counting%10==0){
					
					flaged=1;}
				else{
				
				for(joy=0;joy<4;joy++){
					bin=bin*2;
					bin=bin%10;
					a[joy]=bin;
					
				}
				kar=kar-3;
				bin=kar%4;
				
				for(joy=0;joy<bin;joy++){
					
					counting+=a[joy];}
				
				kar=kar-bin;
				counting+=(5*kar);
				if(counting%3==0)
				cout<<"YES";
				else
				flaged=1;
				}
			}
			if(flaged==1)
			cout<<"NO";
		}
		else{
			if(kar==2){
				counting=da+db;
			}
			else{
				joy=da+db;
				joy=joy%10;
				counting=da+db+joy;
			}
			if(counting%3==0)
			cout<<"YES";
			else
			cout<<"NO";
		}
		cout<<endl;
	}
	return 0;
}