#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
// #include<sys/wait.h>
 
int n[100],i;
pid_t id;
 
 
void main()
{
 
    printf("Enter the number: ");
        for(i=1;i<=10;i++)
            scanf("%d",&n[i]);
            id=fork(); 
            oddFun();
            evenFun();
} 
 
void oddFun(){
    if(id == 0){
        printf("Child Process Odd Numbers\n");
        for(i=1;i<=10;i++){
        {
            if(n[i] % 2 != 0){
             printf("%d\n",n[i]);
             }
        }
    }
    }
}
 
void evenFun(){
    if(id == 0){
    printf("Parent Process Even Numbers\n");
    for(i=1;i<=10;i++){
{
    if(n[i] % 2 == 0){
     printf("%d\n",n[i]);
        }
        }
    }
    }
}

/*
Output: -
Enter the number: 1 2 3 4 5 6 7 8 9 10
Child Process Odd Numbers
1
3
5
7
9
Parent Process Even Numbers
2
4
6
8
10

*/
