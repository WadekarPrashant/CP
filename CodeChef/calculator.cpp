#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter value of a "<<endl;
    cin>>a;
    cout<<"Enter value of b "<<endl;
    cin>>b;
    char op;
    cout<<"Enter the operation you want to perform "<<endl;
    cin>>op;
    cout<<endl;

    switch(op){
        case '+': cout<<(a+b)<<endl;
        break;

        case '-': cout<<(a-b)<<endl;
        break;

        case '*': cout<<(a*b)<<endl;
        break;

        case '/': cout<<(a/b)<<endl;
        break;

        case '%': cout<<(a%b)<<endl;
        break;
    }

    return 0;
} 