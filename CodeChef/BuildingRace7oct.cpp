#include <iostream>
#include<stdio.h>
using namespace std;

int main() {
    // chif --> On which floor is chefina
    // chf  --> On which floor is chef
    // ChifVel --> Speed of Chefina
    // ChefVel --> Speed of Chef
    // tchif --> Time of Chefina
    // tchef --> Time of Chef
    
    int testcase;
    cin>>testcase;
    while(testcase--){
    float Chf;
    float chif;
    float ChefVel;
    float ChifVel;

    cin>>Chf>>chif>>ChefVel>>ChifVel;

    float tchif,tchef;

        tchif=chif/ChifVel;
        tchef=Chf/ChefVel;

        if(tchif<tchef){

            cout<<"Chefina"<<endl;
        }
        else if(tchif>tchef){

            cout<<"chef"<<endl;
        }
        else{

            cout<<"Both"<<endl;
        }

    }
   
    return 0;
}
