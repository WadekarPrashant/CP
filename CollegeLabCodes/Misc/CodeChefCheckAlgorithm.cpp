#include <iostream>
#include<sstream>
// #define ll long long
using namespace std;

int main(){
int testcase;\

cin>>testcase;

while(testcase--)
{
int cinout=1;
int input;
// int jump;
string strin;
string temperory="";
cin>>strin;
for(input=0; input<strin.size(); input++)
{
if(strin[input]==strin[input+1])
{
cinout++;
continue;
}
else{
temperory+=strin[input];
ostringstream s2;
s2<<cinout;
string s3="";
s3+=s2.str();
temperory+=s3;
cinout=1;
}
}
if(temperory.size()<strin.size()){
cout<<"yes";
}
else{
cout<<"no";
}
}
}