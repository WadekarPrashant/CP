#include<stdio.h>
int main()
{
    int testcase;
    int input1;
    int arr[51];
    int input;
    int jp;
    int k;
    int addition;
    int multiplication;
    int counting;
    scanf("%d",&testcase);
    while(testcase--)
    {
        scanf("%d",&input1);
        for(input=0;input<input1;input++)
            scanf("%d",&arr[input]);
        counting=0;
        for(input=0;input<input1-1;input++)
        {

            for(jp=input+1;jp<input1;jp++)
            {
                addition=0;
                multiplication=1;
                for(k=input;k<=jp;k++)
                {
                    addition+=arr[k];
                    multiplication*=arr[k];
                }
                if(addition==multiplication)
                    counting++;
            }
        }
        printf("%d\n",counting+input1);

    }

    return 0;
}
