#include<stdio.h>
#include<string.h>
long long dp[1000005][4][4]={0};
int main()
{
	char str[1000005],x,y;
	long long querty;
    long long lend;
    long long lenses;
    long long rid;
    long long inp;
    long long jar;
    long long kit;
    long long interim;
    long long interim1;
    long long interim2;
    long long interim3;
	scanf("%s",str);
	scanf("%lld",&querty);
	lenses=strlen(str);
	for(inp=0;inp<lenses;inp++)
	{
		if(str[inp]=='c')
			interim=0;
		else if(str[inp]=='h')
			interim=1;
		else if(str[inp]=='e')
			interim=2;
		else	interim=3;
		for(jar=0;jar<4;jar++)
		{
			for(kit=0;kit<4;kit++)
			{
				if(inp==0)
				{
					if(interim==jar&&interim==kit)
						dp[inp][jar][kit]=1;
					else
						dp[inp][jar][kit]=0;
				}
				else
				{
					dp[inp][jar][kit]=dp[inp-1][jar][kit];
					if(interim==kit)
					{
						if(jar!=kit)
							dp[inp][jar][kit]+=dp[inp-1][jar][jar];
						else
							dp[inp][jar][kit]++;
					}
				}
			}
		}	
	}
	for(inp=0;inp<querty;inp++)
	{
		scanf(" %c %c",&x,&y);
		if(x=='c')
                       interim=0;
                else if(x=='h')
                       interim=1;
                else if(x=='e')
                        interim=2;
                else interim=3;
		if(y=='c')
                        interim1=0;
                else if(y=='h')
                        interim1=1;
                else if(y=='e')
                        interim1=2;
                else interim1=3;
		scanf("%lld%lld",&lend,&rid);
		interim2=dp[rid-1][interim1][interim1]-((lend<=1)?0:dp[lend-2][interim1][interim1]);
		interim3=(lend<=1)?0:(dp[lend-2][interim][interim]*interim2);
		printf("%lld\n",dp[rid-1][interim][interim1]-((lend<=1)?0:dp[lend-2][interim][interim1])-interim3);
	}
	return 0;
}
