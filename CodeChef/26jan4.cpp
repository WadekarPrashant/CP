#include <bits/stdc++.h>
using namespace std;

int32_t main()
{   int testcases;
    cin >> testcases;

    while (testcases--){
        
    int number;
    cin >> number;
    int zero = 0;
    int three = 3;
    int two = 2;
    int one =  1;

    int measure = zero;
    string wordList;
    cin >> wordList;
    for (int i = zero; i < number; i++)
        measure += wordList[i] == '1';
        int equal1 = measure == two ;
        int equal2 =  measure == three;
        int equal3 = measure == one ;
    if (equal1 || equal2)
        cout << "yes" << "\n";
    else if (equal3 && number > two)
        cout << "yes" << "\n";
    else
        cout << "no" << "\n";
    }
}