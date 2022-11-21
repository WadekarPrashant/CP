#include<bits/stdc++.h> 

using namespace std;

int main(){
int testcases; 
cin>>testcases;
while(testcases--){
string language;
string yesyes;
string polycarp;
cin>>polycarp;
int td;
string avio =""; 
for (int pop = 0; pop < 20; pop++)
avio = avio + "Yes";
// avio+="Yes"; 
// long long int replace = 
if((td=avio.find(polycarp, 0)) == string::npos)
cout<<"no"<<endl;
else
cout<<"yes"<<endl;
}
return 0;
}