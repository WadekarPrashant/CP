#include <bits/stdc++.h>
#include<iostream>
#include<math.h>

using namespace std;

int solution(vector<int>value)
{
    int solution = INT_MIN;
    // loop for solution
    for(int ko = 0; ko < value.size() ; ko++)
    solution = max(solution,value[ko]);

    // getting the answer
    return solution;
    
}
int main() {
 // Getting testcase 
    int testcase;
    cin>>testcase;
    while(testcase--)
    {   
        // taking the input
        int input;
        int valt;
        cin>>input;
        vector<int>value;

        for(int pk = 0; pk < input;pk++)
        {
            int valt;
            cin>>valt;
            value.push_back(valt);
        }
        cout<<solution(value)<<endl;
    }
    
}