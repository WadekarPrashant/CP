#include <bits/stdc++.h> 
using namespace std;

int main(){ 
  int tc; 
  cin>>tc; 
  while(tc--){ 
       int a,b,c,d; 
    cin>>a>>b>>c>>d; 
 
    set<int>find; 
 
    for(int i=a;i<=b;i++){ 
        find.insert(i); 
    } 
    for(int i=c;i<=d;i++){ 
        find.insert(i); 
    } 
 int answer = find.size() ;
    cout<<find.size()<<endl; 
  } 
}