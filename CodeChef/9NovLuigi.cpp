#include <bits/stdc++.h>
#include<math.h>
#include<iostream>

using namespace std;
// function for the solution
int solution(vector<int>version){   
    int gradient = version[0];
    int common = 0;

    for(int ko = 0 ; ko < version.size() ; ko++){   
        // gcd is the greatest common divisor
        gradient = __gcd(version[ko],gradient);}
    for(int m = 0 ; m < version.size() ; m++){
        if(version[m] != gradient){
        common++;}
        }
    // returning answer
    return common;}
int main() {
    // taking testcase and input
 int testcase;

 cin>>testcase;

 while(testcase--){
    int input;
    int value;

     cin>>input;
     vector<int>version;
     for(int p = 0 ; p < input ; p++){
         cin>>value;
         version.push_back(value);}
     cout<<solution(version)<<endl;}
 
}