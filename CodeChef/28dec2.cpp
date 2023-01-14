#include<math.h>
#include<stdio.h>
#include<iostream>
# define ll long long int
using namespace std;

int main()
{   int tc;
    cin>>tc;
    while(tc--){
    int small;
    int medium;
    int big;
    cin >> small >> medium >> big;
    int mebi = medium+big ;
    int smbi = small+big ;
    int smme = small+medium ;

    if(small == (mebi)or (medium == (smbi)) or(big == (smme))){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    }
    return 0;
} 