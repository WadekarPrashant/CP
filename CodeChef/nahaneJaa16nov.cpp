#include<bits/stdc++.h>
#include<ios>
#include<iostream>
#include<math.h>

#define loop(value0 , compval) for(int inp = value0 ;inp < compval; inp++)
#define ll long long int
#define fast  ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;
int main() {

 fast
 ll testcase;
 cin>>testcase;
 while(testcase--){
     ll input1;
     ll arrk;
     cin>>input1>>arrk;
    // cout<<n<<" "<<k<<endl;
        int one = 1;

    bool wrong = false;
     bool solution = wrong;
     vector<int> a(input1);
     loop(0 , input1){
    // for(int oneloop = 0;oneloop < input1; oneloop++){
        cin>>a[inp];
    }
    int zero = 0;
    ll x=count(a.begin(),a.end(),arrk);

    if(x == zero){ 
    cout<<"NO"<<endl;
    }
    // int one = 1;
    else if(input1 != one and x == one  and a[input1 - 1] == arrk) {
    cout<<"No"<<endl;
    }
    else {
        cout<<"YES"<<endl;
        }
 }
  
 return 0;
}