#include<bits/stdc++.h>
#include<math.h>
#include<iostream>
using namespace std;
#define ll long long

int main()
{
    int testcase;
    cin>>testcase;
    int p = 3;
    for(int i=0; i<p; i++){
        p=p+i;
    }
    while(testcase--){
        int input=0;
        cin>>input;
        vector<int> arr(input);
        for(int j =0; j<input; j++){
            cin>>arr[j];
        }
        arr[0] == 1 ?
        cout<<"Yes"<<endl : cout<<"No"<<endl;
    }
} 