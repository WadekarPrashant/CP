     #include<iostream>
     using namespace std;
     
    int main()
    {
     
    long int tc, result;
    long long int a, b;
    cin>>tc;
     
    while(tc--)
    {
    result = 0;
    cin>>a>>b;
    while( a!= b )
    {
    if(a > b)
    a = a / 2;
    else
    b = b / 2;
    result ++ ;
    }
    cout<<result<<endl;
     
    }
    return 0;
     
    } 
