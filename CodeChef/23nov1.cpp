#include<bits/stdc++.h>
#include<math.h>

#define ll long long int

using namespace std;

int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--){
        int no1,no2,no3,no4;
        cin>>no1>>no2>>no3>>no4;

        if(no4 % ((no1*no3)+no2)== 0){
            cout<<"YES"<<endl;
        }
        else if(no4%((no1*no3)+no2) - (no1*(no3-1)) > 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
} 