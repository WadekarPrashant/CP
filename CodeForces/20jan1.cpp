#include<bits/stdc++.h> 
#include<iostream>
#include<math.h>
#include<vector>

using namespace std;

#define ll long long

#define MOD 1000000007

int main(){

ios_base::sync_with_stdio (false); cin.tie(0); cout.tie(0);

ll testcase; cin>>testcase;

while(testcase--){

ll integer; 
cin>>integer;

vector<ll>vent(integer);
ll zero = 0;
ll solution=zero;

for(ll ifelse = zero; ifelse < integer; ifelse++){

cin>>vent[ifelse];

if(vent[ifelse] == 1) solution++;
}
ll bytwo = solution/2;
ll sub = integer-solution;
ll percent = solution%2;
ll end = sub + bytwo; if(solution%2 != 0) end++;

cout<<end<<"\n";

}

return 0;

}