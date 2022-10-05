#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	string strict;
	cin>>strict;
	int another=0;
    int bond=0; 
    int chat=0; 
    int dont=0;
	int length = strict.length();
for(int input=0;input<length;input++)
	{
 if(strict[input]=='C')
 {
 another++;
 }
 else if(strict[input]=='H')
 {
     if(another>0)
     {
 bond++;
 another--;}
 }
 else if(strict[input]=='E')
 {
     if(bond>0)
     {
 chat++;
 bond--;
 }}
 else if(strict[input]=='F')
 {
     if(chat>0)
     {
     dont++;
     chat--;
 }
 }
	}
 cout<<dont<<endl;
	
	return 0;
}
