#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef a
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
		
	int tc;
	cin>>tc;
	
	while(tc--){
		int n;
		cin>>n;
		
		int arr[n];
		for(int i = 0; i < n; i++){
			cin>>arr[i];
		}
		
		int x = arr[0]^arr[1];
		
		for(int i = 2; i < n; i++)
			x = x^arr[i];
		
			if(x == 0){
				cout<<"YES"<<"\n";
			}else{
				cout<<"NO"<<"\n";
			}
		
		
	}		

	return 0;
}