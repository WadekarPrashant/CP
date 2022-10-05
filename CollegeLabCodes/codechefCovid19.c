#include <stdio.h>
int main(){
int testcase;
scanf( "%d",&testcase);
for(int i=0;i<testcase;i++){
int n,addition=1,input3=0;
scanf("%d",&n);
int entry[n],win=n;
for(int k=0;k<n;k++){
scanf("%d",&entry[k]);
}
for(int input2=0;input2<n;input2++){
	for(int input1=input2;input1>0;input1--){
		if((entry[input1]-entry[input1-1])<=2){
			addition=addition+1;
		}
		else{
			break;
		}
	}
	for(int input1=input2;input1<n-1;input1++){
		if((entry[input1+1]-entry[input1])<=2){
			addition=addition+1;
		}
		else{
			break;
		}
	}
if(addition>input3){
	input3=addition;
}
if(addition<win){
	win=addition;
}
addition=1;
}
printf("%d %d",win,input3);
printf("\n");
}
}

