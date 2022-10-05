#include<iostream>
using namespace std;

int main(){
    int testcase;
	cin>>testcase;
	
	while(testcase--){
		
		string str;
		cin>>str;
		bool itsvowel = false;
        for(int input = 0; input < str.length(); input++)
        {
            string sack = "";
            for(int input2 = input + 1; input2 < str.length(); input2++)
            {
                if(sack.length() > 2)
                {
                    for(int input3 = 0; input3 < sack.length(); input3++){
						
						if(sack[input] == 'a' || sack[input] == 'e' || sack[input] == 'i' || sack[input] == 'o'|| sack[input] == 'u')
                        {
							itsvowel = true;
						}
						else{
							itsvowel = false;
							break;
						}
					}
				}
				else
                {
				 break;
				}
			}
			
		}
		
		if(itsvowel== true){
			cout<<"happy"<<endl;
		}else{
			cout<<"sad"<<endl;
		}
	}
	
	return 0;
}
