// #include<bits/stdc++.h>
// #include<iostream>

// #define ll long long int
// using namespace std;

// void solve(){
// vector<int> findmiddle(3);
//   for(auto & i: findmiddle) cin>>i;
 
//   sort(findmiddle.begin(), findmiddle.end());
//   int answer =  findmiddle[1];
//   cout<<answer<<endl;
// }

// correct
#include "bits/stdc++.h"
#include<iostream>

#define ll long long int
using namespace std;

int main(){
  int testcase;
  cin>>testcase;

  while(testcase--){
    vector<int> findmiddle(3);
    for(auto &value: findmiddle) cin>>value;
 
    sort(findmiddle.begin(), findmiddle.end());
    int solution  = findmiddle[1];
    cout<<solution<<endl;
  }
  return 0;
}