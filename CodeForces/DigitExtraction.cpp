#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the no.";
    cin>>n;
    int pro =1;
    int sum =0;

    while(n!=0){
        int d = n%10;
        pro = pro * d;
        sum = sum + d;
        n=n/10;
    }
    cout<<"Product is "<<pro<<endl;
    cout<<"Sum is "<<sum<<endl;
    cout<<"Product - Sum  is "<<pro - sum<<endl;;

    return 0;
} 