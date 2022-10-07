#include<iostream>
using namespace std;

int main()
{
    // per --> the no. of students eating the pizza
    // ser --> the no. of pizza slices  per student will have
    // ttSclices --> Total no. of slices required
    int testcase;
    cin>>testcase;
    while(testcase--){
        int per ;
        int ser ;
        cin>>per>>ser;
        int ttSlices = per*ser;
        int pizza = ttSlices % 4;
        if( pizza == 0){
            cout<<ttSlices/4<<endl;
            }
            else{
                cout<<(ttSlices/4)+1<<endl;
            }
    }
    return 0;
} 