#include<bits/stdc++.h> 
using namespace std;

#define ll long long

#define MOD 1000000007 
#define endl "\n"

void solve(){

ll n; 
cin>>n;

vector<ll>v(n);

ll cntone=0;

for(ll i=0; i<n; i++){

cin>>v[i];

if(v[i]==1) cntone++;
}
ll ans=n-cntone + cntone/2; if(cntone%2!=0) ans++;

cout<<ans<<endl;

}

int main(){

ios_base::sync_with_stdio (false); cin.tie(0); cout.tie(0);

ll t; cin>>t;

while(t--){

solve();

}

return 0;

}