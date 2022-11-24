
#include<iostream>
using namespace std;

int main()
{  
     int x,y;
    cin>>x>>y;
    int a,b;
    for(int i=1;i<=y;i++){
        cin>>a>>b;
    }
    if(y<x){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
    return 0;
} 