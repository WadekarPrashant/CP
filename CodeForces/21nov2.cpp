#include "bits/stdc++.h"
#include<iostream>

#define ll long long int
using namespace std;

int main(){
  int testcase;
  cin>>testcase;

  while(testcase--){
    int strlength;
    string words;
  
    cin>>strlength>>words;
    int minus = -1;
  
    int maximum = minus;
    for(auto & value: words){
      maximum = max(maximum, (int)value-'a');
    }
   int solution = maximum + 1;
    cout<<solution<<endl;
  }
  return 0;
}