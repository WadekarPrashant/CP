#include <bits/stdc++.h>
#define lli long long int
// #define mod 2098244353
using namespace std;




int main() {
    lli ny,it,jp,kt,per,top;
    lli any,bass,queries;
    lli xa,yb,xc,yd;
    bool flag;
	cin>>ny  ;
	
vector <vector<vector <int> > > v1(ny,vector <vector<int> > (ny,vector <int>(10,0)));

            for(it=0;it <ny;it++){
            
            for(jp=0;jp<ny;jp++){
            cin>>per;
            //arr[p-1]++;
            for(kt=0;kt<10;kt++){
                if(it>0 && jp>0)v1[it][jp][kt]=v1[it-1][jp][kt]+v1[it][jp-1][kt] -v1[it-1][jp-1][kt];
                else if(it>0)v1[it][jp][kt]=v1[it-1][jp][kt];
                else if(jp>0)v1[it][jp][kt]=v1[it][jp-1][kt];
}
v1[it][jp][per-1]++;
}
//arr.clear();
}


        cin>>queries;
        for(it=0;it<queries;it++){
            cin>>xa>>yb>>xc>>yd    ;
            vector <int> ans(10,0) ;
            per=0;
            for(kt=0;kt<10;kt++){
            ans[kt]=v1[xc-1][yd-1][kt];
            if(xa-1>0 && y1-1>0){
                ans[kt]-=v1[xc-1][yb-2][kt];
                ans[kt]-=v1[xa-2][yd-1][kt];
                ans[kt]+=v1[xa-2][yb-2][kt];
            }
            else if(xa-1>0){
                ans[kt]-=v1[xa-2][yd-1][kt];    
            }
            else if(y1-1>0){
                ans[kt]-=v1[xc-1][yb-2][kt];    
            }
               if(ans[kt]>0)per++;      
            }    
            cout<<per<<"\n";
            ans.clear();
}

    return 0;
}
