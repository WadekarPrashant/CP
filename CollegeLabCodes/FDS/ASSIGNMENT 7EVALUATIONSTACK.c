#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAXSIZE 20
#define SIZE 20
int top =-1;
char stack[MAXSIZE];


void push(char item);
char pop();
int isEmpty();
int isFull();
void eval(char postfix[20]);
int calc(int c1,int c2,char op);

void push(char item){
			top=top+1;
			stack[top]=item;

}

 char pop(){
	 		char temp;
	 		temp = stack[top];
	 		top=top-1;
	 		return temp;
	 	}


int isEmpty(){
	if(top==-1){
		return 1;
	}
	else{
		return 0;
	}
}
 int isFull(){
	 if(top==MAXSIZE-1){
		 return 1;
	 }
	 else{
		 return 0;
	 }
}



 int calc(int c1,int c2,char op){
	 int ans;
	 switch(op)
	 {
	 case'+':
		 	 ans=c1+c2;
	 	 	 break;
	 case'-':
		 	 ans=c1-c2;
	 	 	 break;
	 case'*':
		 	 ans=c1*c2;
	 	 	 break;

	 case'/':
		 	 ans=c1/c2;
		 	 break;
	 default:
		 printf("invalid");
	 }
	 return(ans);
 }
 void eval(char postfix[20]){
	 int z, ans, c1,c2 ,i;
	 for(i=0;postfix[i]!='\0';i++){
		 if(isalpha(postfix[i])!=0){
			 printf("\nEnter the value %c: ",postfix[i]);
			 scanf("%d",&z);
			 push(z);
		 }
		 else{
			 c1=pop();
			 c2=pop();
			 ans=calc(c2,c1,postfix[i]);
			 push(ans);
		 }
	 }
	 printf("\nEvaluation is: ");
	 printf("%d",stack[top]);
 }

 int main(){

	 char postfix[20];
	 printf("Enter the expression:  \n");
	 scanf("%s",postfix);
	 eval(postfix);
 }