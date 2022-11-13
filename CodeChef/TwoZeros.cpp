#include <bits/stdc++.h>
// #define ll long long int
// #define loop(o,n) for(int i=o;i<n;i++)
// #define endl "\n"
using namespace std;
long long int M=1e9+7;
int main() {
    vector<long long int> fact(1000001);
    fact[1]=1,fact[0]=1;
    // loop(1,1000001)
    for(int i=1;i<1000001;i++){
        fact[i]=((i%M)*(fact[i-1]%M))%M;
    }
 int t; 
 cin>>t ; 
 while(t--){
     int n;
     cin>>n;
     long long int sum=0;
     for(int i=0;i<n;i++){
         int x;
         cin>>x;
         int gf = sum%M;
         int gh = fact[x]%M;
         sum=((gf)+(gh))%M;
     }
    // loop(0,100){
    //     cout<<fact[i]<<endl;
    // }
     cout<<sum<<endl;
 }
 return 0;
}