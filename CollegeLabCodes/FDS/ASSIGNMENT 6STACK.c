#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAXSIZE 20

int top =-1;
char stack[MAXSIZE];


void push(char item);
char pop();
int isEmpty();
int isFull();
void in_post(char inexp[MAXSIZE],char postexp[20]);


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


 int icp(char ch)
 {
 	if(ch == '+' || ch == '-')
 		return 1;
 	if(ch == '*' || ch == '/')
 		return 2;
 	if(ch == '^')
 		return 4;
 	if(ch == '(')
 		return 5;
 	else
 		return 0;
 }

 int isp(char ch)
 {
 	if(ch == '+' || ch == '-')
 		return 1;
 	if(ch == '*' || ch == '/')
 		return 2;
 	if(ch == '^')
 		return 3;
 	else
 		return 0;
 }

 void in_post(char inexp[MAXSIZE],char postexp[MAXSIZE]){
	 char tkn;
	 int i=0,k=0;
	 tkn = inexp[i];
	 while(tkn!='\0'){
		 if(isalpha(tkn)!=0){
			 postexp[k]=inexp[i];
			 k++;
		 }
		 else{
			 if(tkn=='('){
				 push('(');
			 }
			 else{
				 if(tkn==')')
				 {while(((tkn=pop())!='(')){
					 postexp[k]=tkn;
					 k++;
				 	 }
				 }
				 else{
					 while((isEmpty()==0 )&& (isp(stack[top])>=icp(tkn))){
						 tkn=pop();
						 postexp[k]=tkn;
						 k++;
					 }
					 push(tkn);
				 }
			 }
		 }
		 i++;
		 tkn=inexp[i];
	 }
	 while(isEmpty()==0){
		 postexp[k]=pop();
		 k++;
	 }
	 postexp[k]='\0';
	 printf("Converted expression is: %s",postexp);
 }
int main(){
	 int ch;

	 char h;
	 char infix[20],postfix[20];

	 printf("\n Stack Menu\n");

	 do
	 {printf("\nEnter the Choice: \n \n1. Infix to Postfix\n \n2. Postfix to infix\n \n3. Exit\n");
	 scanf("%d", &ch);
	 switch(ch){
	 case 1:	 printf("Enter the infix expression: ");
	 	 	 scanf("%s", infix);
	 	 	 in_post(infix, postfix);
	 	 	 break;
	 case 2: pop();
	 	 	 break;
	 case 3: exit(0);
	 	 	 break;
	 default: printf("Invalid Choice");
	 }
	 printf("\nDo you want to continue: \n \n1. Y \n2. N\n");
	 scanf(" %c",&h);
}while(h=='Y');

return 0;

 