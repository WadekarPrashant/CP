#include <iostream>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;

string sol(string loop)
{
    string first;
    string second;
    for(int x = 0; x < (loop.length() / 2 ) ; x++)
    {
        first.push_back(loop[x]);
    } 
    for(int y = (loop.length()/2) ; y < (loop.length());y++)
    {
        second.push_back(loop[y]);
    }
    // completes the answer
    if(first == second)
    return "yes";
    return "no";
    
}

int main() {
 int testcase;
 cin>>testcase;
 while(testcase--)
 {
     int input;
     cin>>input;
     
     string loop;
     cin>>loop;
     cout<<sol(loop)<<endl;
 }
}