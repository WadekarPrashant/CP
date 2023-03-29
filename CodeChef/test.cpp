#include <bits/stdc++.h>
using namespace std;


bool check(int a,int b){
    return a==b;
}
int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
    vector<int>v(n);
     vector<int>copy;
     map<int,set<int>>mm;
    for(int i=0;i<n;i++){
        cin>>v[i];
        copy.push_back(v[i]);
        mm[v[i]].insert(i);
        
    }
    vector<vector<int>>ans;
    sort(copy.begin(),copy.end());
    for(int i=0;i<n;i++){
        if(check(v[i],copy[i])){
            
        }
        else{
            int idx=*mm[v[i]].begin();
            mm[copy[i]].erase(mm[copy[i]].begin());
        mm[v[i]].erase(i);
        mm[v[i]].insert(idx);
         ans.push_back({i,idx});
         ans.push_back({idx,i});
         ans.push_back({i,idx});
        }
    }
    if(ans.size()==0){
        cout<<0<<endl;
        continue;
    }
    cout<<ans.size()-3<<endl;
    for(int i=3;i<ans.size();i++){
         cout<<ans[i][0]+1<<' '<<ans[i][1]+1<<endl;
    }
         
    }
    
    
 return 0;
}