#include <iostream> 
using namespace std;
int main() {
int testcase;
cin>>testcase;

while(testcase--){

int alphax;
int alphay;
int alphaz; 
cin>>alphax>>alphay>>alphaz;

if(alphaz >= alphay){
cout<<alphax<<endl;
} 
else{
     if(alphay % alphaz == 0){

cout<<(alphax * (alphay / alphaz))<<endl;

} else{

cout<<(alphax * (alphay / alphaz + 1))<<endl;
}
}
}
return 0;
}


