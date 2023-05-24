#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(n==3){
            cout<<1<<" "<<2<<" "<<3;
        }
        else{
            cout<<n<<" "<<n-2<<" ";
            for(int i =1;i<=n-4;i++){
                cout<<i<<" ";
            }
            cout<<n-3<<" "<<n-1;
        }
        cout<<endl;
    }

    return 0;
}
