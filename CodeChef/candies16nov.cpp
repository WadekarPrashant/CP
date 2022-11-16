#include<bits/stdc++.h>
#include<iostream>
#include<math.h>

using namespace std;

int main() {

 int testcases;
 cin>>testcases;
 while(testcases--){
     int input, input2;
     cin>>input;
     input2 = input;
     map<int,int> execute;
     for(int i=0;i<2*input;i++){
         int brofx;
         cin>>brofx;
         execute[brofx]++;
     }
     bool solution=true;
     for(auto val:execute){
         if(val.second>2){
             solution=false;
             break;
         }
     }
     if(solution==true) cout<<"Yes"<<endl;
     else cout<<"No"<<endl;
     }
  
 return 0;
}