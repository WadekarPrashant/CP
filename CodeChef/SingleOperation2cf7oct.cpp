#include<bits/stdc++.h>
#include<iostream>

using namespace std;
void doit(){
   int input;
   string bin;
   cin >> input;
   cin >> bin;
   for(int index=1; index < input; ++index) 
      if(bin[index]=='1') {
         cout << index <<"\n";
         return;
      }
   cout << input <<"\n";
}
signed main() {
   int testcase;
   cin >> testcase;
   while(testcase--) 
   doit();
}
