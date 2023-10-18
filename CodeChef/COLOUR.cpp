#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, a[3], ans, i, j;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>a[0]>>a[1]>>a[2];
        
        ans=0;
        
        if(a[0]>0){
            a[0]--;
            ans++;
        }
        if(a[1]>0){
            a[1]--;
            ans++;
        }
        if(a[2]>0){
            a[2]--;
            ans++;
        }
        
        sort(a, a+3);
        reverse(a, a+3);
        
        if(a[0]>0 && a[1]>0){
            ans++;
            a[0]--;
            a[1]--;
        }
        if(a[0]>0 && a[2]>0){
            ans++;
            a[0]--;
            a[2]--;
        }
        if(a[1]>0 && a[2]>0){
            ans++;
            a[1]--;a[2]--;
        }
        
        cout<<ans<<"\n";
        
    }
}
