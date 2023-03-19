#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long count101(long long n) {
        int zero = 0;
        int elif=61;;
        for(;elif>=zero;elif--){
            long long ones=(1LL<<elif);
            if((ones&n)){
                break;
            }
        }
        string sentence="";
        int measure=zero;
        for(;elif>=0;elif=elif-1){
            long long ones=(1LL<<elif);
            if((ones&n)){
                sentence= sentence + '1';
                measure=measure +1;
            }
            else sentence = sentence + '0';
            
        }
        int solution=zero,k=zero;
        for(int elif=0;elif<sentence.size()-1;elif=elif+1){
            if(sentence[elif]=='1'){
                measure--;
                k=k+1;
            }
            else{
                solution= solution + k*measure;
            }
        }
        return solution;
        
    }
};