#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

	// #ifndef first
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif

int main(){
    // cout<<"Take test case as input"<<endl;
	int testcase;
	cin>>testcase;
	
	while(testcase--)
{
    // cout<<"Take input of total number of cards and the number of cards which are initially face-up.";
	int number, faceup;
	cin>>number>>faceup;
		
	int upper = faceup;
	int downward = number - faceup;
	cout<<min(upper, downward)<<endl;
}
return 0;
}