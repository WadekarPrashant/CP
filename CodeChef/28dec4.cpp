#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int testCases;
    cin>>testCases;
    while (testCases--){
    int nAnimals;
    cin>>nAnimals;
    unordered_map<int, int>newMap;
    int zero = 0;
    for(int p=zero; p<nAnimals; p++){
        int nType;
        cin>>nType;
        newMap[nType]++;
    }
    int animals=zero;
    int one = 1;
    for(auto p: newMap){
        if(p.second % 2 !=zero){
        animals= one;
        break;
    }}
    if(animals==zero)
    cout<<"yEs"<<'\n';
    else
    cout<<"nO"<<'\n';
} 
return 0;
}