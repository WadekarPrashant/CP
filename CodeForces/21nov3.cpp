#include "bits/stdc++.h"
#include<iostream>

#define ll long long int
using namespace std;

void solve(){
  int arraylen;
  cin>>arraylen;
 
  vector<int> onea(arraylen), twob(arraylen);
  int zero = 0;
  for(int iloop = zero; iloop < arraylen; iloop++){
    cin>>onea[iloop];
    twob[iloop] = onea[iloop];
  }
 
  sort(onea.begin(), onea.end());
 
  for(auto & iloop: twob){
    int first = upper_bound(onea.begin(), onea.end(), iloop) - onea.begin();
    int last = lower_bound(onea.begin(), onea.end(), iloop) - onea.begin();
    
    int firstif = (first == arraylen);
    if(firstif){
        int secondif = arraylen - 2;
      cout<<iloop - onea[secondif]<<" ";
    } else{
        int thirdif = arraylen - 1;
      cout<< iloop - onea[thirdif]<<" ";
    }
  } 
  cout<<endl;
}
int main(){
  int testcases;
  cin>>testcases;

  while(testcases--){
    int a,b;
    int c = a + b;
    solve();
  }
  return 0;
}