#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
	// #ifndef a
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif
		
	int tc;
	cin>>tc;
	
	while(tc--){
		int n; 
		cin>>n;
		
		int arr[n];
		
		for(int i = 0; i < n; i++){
			cin>>arr[i];
		}
		
		
		int mul = 1;
		
		for(int i = 0; i < n; i++){
			mul = mul * arr[i];
		}
		
		if(mul < 0){
			cout<<"1"<<"\n";
		}else{
			cout<<"0"<<"\n";
		}
		
		
	}
	
	return 0;
}