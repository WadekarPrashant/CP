#include <stdio.h>
#include<string.h>
int main()
{
    int testcase;
    scanf("%d",&testcase);
    for(int i=0;i<testcase;i++)
    {
        char s[1000],x[1000];
        scanf("%s",s);
        int len=strlen(s);
        int kip;
        int cop;
        int r;
        kip=0;
        cop=1;
        x[0]=s[0];
        for(int input=0;input<len;input++)
        {
            if(s[input]==s[input+1])
            cop++;
            else
            {
                kip++;
                while(cop!=0)
                {
                    kip++;
                    cop=cop/10;
                }
                cop=1;
            }
        }
        if(len>kip)
         printf("YES\n");
        else
         printf("NO\n");
    }
    return 0;
}
