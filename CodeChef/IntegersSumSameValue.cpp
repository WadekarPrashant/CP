#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
// 	#ifndef a
// 		freopen("input.txt", "r", stdin);
// 		freopen("output.txt", "w", stdout);
// 	#endif
		
	int n;
	cin>>n;
	
	int count = 0;
	
	if(n == 0 || n == 1){
		cout<<"0"<<"\n";
	}else{
		for(int i = 0; i < n; i++){
			
			for(int j = 0; j < n; j++){
				
				if((i + j) == n){
					count++;				
				}
			}
		}
		
		cout<<count<<"\n";
	}
	
	
	return 0;
}