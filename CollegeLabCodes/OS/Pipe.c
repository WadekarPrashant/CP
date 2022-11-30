#include<stdio.h>
#include<sys/types.h>
// #include<sys/ipc.h>
#include<unistd.h>
#include<stdlib.h>
#define MAX 20

int main()
{
int filedes[2],n;
char string[MAX];
char line[MAX];
pid_t pid;

printf("Enter the string to be given to the parent:");
fflush(stdin);

scanf("%s",string);

if((pipe(filedes))<0)
{
printf("\n pipe creation error");
exit(0);
}

if((pid=fork())<0)
{
printf("\n fork error");
exit(0);
}

if(pid>0)
{close(filedes[0]);
write(filedes[1],string,MAX);
}

if(pid==0)
{
close(filedes[1]);
n=read(filedes[0],line,MAX);
line[n]='\0';
printf("\n\n Data read by child is : %s",line);
}

exit(0);
}

