#include<bits/stdc++.h>
 using namespace std;
#define ll long long
#define loop(o,n) for(int i=o;i<n;i++)
#define sort(a) sort(a.begin(),a.end())
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define print(a) for(auto &i : a)  
#define lower_bound(v,x) lower_bound(v.begin(),v.end(),x)
#define upper_bound(v,x) upper_bound(v.begin(),v.end(),x)
#define pb push_back
const int dx[] = { 0, 1, 0, -1 } ; 
const int dy[] = { 1, 0, -1, 0 } ; 
  int main()
 {
fast
      int t;

      cin>>t;

      while(t--)

      {
         int n;
         cin>>n;
         vector<int>a(n);
         loop(0,n)
         {
            cin>>a[i];
         }
         map<int,int>m;
         loop(0,n)
         m[a[i]]++;
         int mn=n;
         print(m)
         {
            int val=0;
            if(i.first&1)
               val = i.first-1;
            else
               val = i.first+1;
            int ans = i.second;
            auto it = m.find(val);
            if(it!=m.end())
               ans+=m[val];
            if(n-ans<mn)
               mn = n-ans;
         }
         cout<<mn<<endl;
      }
    return 0;
  }