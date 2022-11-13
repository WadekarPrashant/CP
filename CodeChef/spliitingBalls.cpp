#include <bits/stdc++.h>
#include<iostream>
#include<math.h>

using namespace std;
long long int fest = 1e9+7;
long long int nerfop = fest;
int main() {
    vector<long long int> fact(1000001);
    long long int hello = 1;
    fact[1] = hello;
    fact[0] = hello;
    for(int tu =  1; tu < 1000001; tu++){
        int del;
        int dell = tu % nerfop;
        fact[tu]=((dell) * (fact[tu-1]%nerfop))%nerfop;
    }
 int testcase; 
 cin>>testcase ; 
 while(testcase--){
     int input;
     cin>>input;
     long long int addition = 0;
     for(int op = 0; op < input; op++){
         int save;
         cin>>save;
         long long int fifty = addition % nerfop;
         long long int four = fact[save] % nerfop;
         addition=((fifty) + (four)) % nerfop;
     }
     cout<<addition<<endl;
 }
 return 0;
}