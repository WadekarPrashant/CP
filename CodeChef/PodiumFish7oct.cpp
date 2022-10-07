#include<iostream>
using namespace std;

int main(){   
    //Rintime --> Time Between Chef and Runner Up
    //WunTime --> Time Between Runner Up and Winner
    int testcase;
    cin>>testcase;
    while(testcase--){
        int WinTime;
        int RunTime;
        cin>>RunTime>>WinTime;
        cout<< RunTime + WinTime<<endl;
    }
    return 0;
} 