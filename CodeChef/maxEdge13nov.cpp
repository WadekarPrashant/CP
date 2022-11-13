#include <bits/stdc++.h>
#include<iostream>
#include<math.h>

using namespace std;

int main() {
 int testcase;
 cin>>testcase;
 while(testcase--){
    int hest;
    int second;
    int third ;
    // taking
    cin>>hest>>second>>third;
    long long int addkl = second + third; 
    long long int solution=0;
        // starting the if loop
              if(hest < addkl){

                  long long int set =(addkl) - hest;
                  long long int subls = third - set;
                  second = second-set;
                  third = third-set;
                  set = 0;
                  solution= solution + (second * (set + third)) + ( set * third )+(set * (set + 1)/2);
                 
              }
              else
              {     
                // else condition
                  long long int set = hest - (addkl);
                  long long int addsl = set + third;
                  long long int mulsl = set * third;
                  long long int subs1 = set - 1;
                  solution = solution + ( second * addsl ) + (mulsl) + (set * (subs1)/2);
              }
              cout<<solution<<endl;
 }
 return 0;
}