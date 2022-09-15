
#include<bits/stdc++.h> 
using namespace std;

void solve(){

int p; cin>>p;

unordered_set<int>st; 
char arr[p]; 
for (int i=0;i<p;i++){ 
    cin>>arr[i];

}

for (int i=0;i<p;i++) { 
    if(arr[i]=='0' && (i==p-1 || arr[i+1]!= '0')){ 
        st.insert(i-2);

    }

}

string res="";

for (int i=0;i<p;i++){ 
    if(st.count(i)==1){

        int temp = 10* (arr[i]-'0') + (arr[i+1]-'0'); res+='a' + temp-1;
        res+='a' + temp-1;
        i+=2;
    }
    else{
        res+='a'  +(arr[i]-'0'-1);
    }
}

cout<<res<<endl;
}