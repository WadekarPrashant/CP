#include<stdio.h>
#include<sys/types.h>
#include<unistd.h> 
#include<stdlib.h>
// #include<sys/wait.h>
 
pid_t num_pid;
int i;
void main()
{
num_pid=fork();
if (num_pid<0)
printf("Error is fork execution");
else
if (num_pid==0)
{
printf("This is the child process: %d\n",getpid());
printf("child complete\n");
}
else
{
printf("This is the parent id %d\n",getpid());
wait (NULL);
printf("****parent exiting after child complete\n");
}
exit(0);
}

/*
Output: -
This is the parent id 1283
This is the child process: 1284
child complete
****parent exiting after child complete

*/