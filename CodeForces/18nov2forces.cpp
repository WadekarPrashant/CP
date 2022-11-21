#include <bits/stdc++.h>
#include<iostream>
#include<math.h>

using namespace std;
#define all(x) (x).begin(), (x).end()
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void getanswer(){
    long long int input1;
    long long int input2;
    cin>>input1>>input2;
    long long int addition=0;
    map<int,int> mul;

    for(int ifor = 0; ifor < input1; ifor++){
      int pk3;
      cin>>pk3;
      long long int wait = addition + pk3;
      addition = wait;
      mul[pk3]++;
    }
    long long int plus = addition + input2;
    long long int y = plus;
    int hell = 0;
    long long int number = hell;
    for(int ifor = 1; ifor < 1000; ifor++){
      int add = ifor + 1;
      int plus1 = ifor*(add);
      if(plus1/2 == y)
      {
        number = ifor;
        break;
      }
      long long int pk1 = ifor*(ifor+1);
      if((pk1/2) > y){
        cout<<"no";
        return;
      }
    }
    int pk2 = 0;
    long long int solution = pk2;

    for(int ifor = 1;ifor <= number; ifor++){
      // long long int m[i]= imp;
      if(mul[ifor])continue;
      solution = solution + ifor;
    }
    // long long int init1 == solution;
    if(solution==input2){
      cout<<"yes"<<endl;
      return;
    }
      cout<<"no"<<endl;

}
signed main(){
    fast
    long long int testcases;
    cin>>testcases;
    while(testcases--)
    {
        getanswer();
    }
}