#include <bits/stdc++.h>
#include<iostream>

#define ll long long int

using namespace std;
 
int centrenumber(int first, int second, int third)
{
    if ((first < second && second < third) || (third < second && second < first))
       return second;
 
    else if ((second < first && first < third) || (third < first && first < second))
       return first;
 
    else
       return third;
}
int main()
{   int testcase;
    cin>>testcase;
    while(testcase--){
    int first;
    int second;
    int third;
    cin>>first>>second>>third;
    cout << centrenumber(first, second, third);
    }
    return 0;
}