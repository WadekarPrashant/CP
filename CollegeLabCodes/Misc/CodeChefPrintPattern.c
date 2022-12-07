#include<stdio.h>
int main()
{
int testcase;
scanf("%d",&testcase);
while(testcase--)
{
	int nat;
	int inp;
	int jw;
	int ky=1;
	int mk=0;
	int l=0;
	scanf("%d",&nat);
	int a[nat][nat],count=0;
	while(mk<=nat-1)
	{
		for(inp=l,jw=mk;inp<=mk,jw>=0;jw--,inp++)
		{
			a[inp][jw]=ky;
			ky++;
		}
		mk++;
	}
	mk=nat-1;
	ky=nat*nat;
	l=nat-1;
	while(mk>0)
	{
	    for(inp=l,jw=mk;inp>0,jw<nat;inp--,jw++)
	    {
	        a[inp][jw]=ky;
	        ky--;
	    }
	    mk--;
	}
	for(inp=0;inp<nat;inp++)
	{
		for(jw=0;jw<nat;jw++)
		{
			printf("%d ",a[inp][jw]);
		}
		printf("\n");
	}
}
return 0;
}
