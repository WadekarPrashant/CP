#include<iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main() 
 {
    int testCases;
    cin>>testCases;
    while (testCases--){
        int nDays;
        cin>>nDays;
        ll chef[nDays];
        ll chefina[nDays];
        ll zero = 0;
        ll one = 1;
        for( int pos=zero; pos<nDays; pos++) 
            cin>>chef[pos];
        for(int pos=zero; pos<nDays; pos++) 
            cin>>chefina[pos];
            int both[nDays];
        for(int pos=zero; pos<nDays; pos++){
            if (chef[pos] == zero || chefina[pos] == zero){
                both[pos] = zero;}
                else 
                both[pos] = one;
                }
                ll pos=zero;
                ll solution = zero;
        while(pos < nDays){
            if (both[pos] != zero){
            ll maxStreak = zero;
            while (both[pos] != zero and pos<nDays)
             {
                 maxStreak++;
                 pos++;
             }
             solution=max(solution,maxStreak);
             }
             pos++;
             }
             cout<<solution<<endl;
    }
    return 0;
}