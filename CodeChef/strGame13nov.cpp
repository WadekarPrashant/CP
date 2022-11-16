#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        ll weight;
        cin>>weight;
        string N;
        cin>>N;
        if (weight % 2 != 0){
            cout<< "no"<<endl;
        }
        else{
            map<char, int> dict;
            for(int i = 0; i< weight; i++){
                dict[N[i]]++;
            }
            ll answer = 1;
            for(auto it : dict){
                if(it.second % 2 != 0){
                    cout<<"no"<<endl;
                    answer = 0;
                    break;
                }
            }
            if (answer){
                cout<<"yes"<<endl;
            }
        }
    }
    return 0;
}