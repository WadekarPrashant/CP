#include <bits/stdc++.h> 
using namespace std; 
#define int long long  
 
int32_t main() { 
    int tc;
    cin>>tc; 
    while(tc--){ 
        int n;
        cin>>n; 
        vector<int> v(2*n); 
        for(int i=0;i<2*n;i++){ 
            cin>>v[i]; 
        } 
        sort(v.begin(),v.end()); 
        int solution = INT_MAX; 
        for(int i=0;i<=n;i++){ 
            if(solution > v[n+i-1]-v[i] ){ 
                solution = v[n+i-1]-v[i]; 
            } 
        } 
        cout<<solution<<endl; 
    } 
 // your code goes here 
 return 0; 
}