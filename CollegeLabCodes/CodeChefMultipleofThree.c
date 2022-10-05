#include<stdio.h>
#define g getchar()
int ii[500004]={0},omod[500004]={0},tmod[500004]={0};
update(int branch,int nofunction,int finish,int input,int j)
{
    int centre;
    int nbranch;
    int temporary;
    if(input>finish || j<nofunction)
        return;
    if(input<=nofunction && finish<=j)
    {
        ii[branch]=(ii[branch]+1)%3;
        temporary=omod[branch];
        omod[branch]=(finish-nofunction+1-omod[branch]-tmod[branch]);
        tmod[branch]=temporary;
        return(0);
    }
    centre=(nofunction+finish)/2;
    nbranch=(branch)<<1;
    update(nbranch,nofunction,centre,input,j);
    update(nbranch+1,centre+1,finish,input,j);
    omod[branch]=omod[nbranch]+omod[nbranch+1];
    tmod[branch]=tmod[nbranch]+tmod[nbranch+1];
    if(ii[branch]==1)
    {
        temporary=omod[branch];
        omod[branch]=finish-nofunction+1-omod[branch]-tmod[branch];
        tmod[branch]=temporary;
    }
    if(ii[branch]==2)
    {
        temporary=tmod[branch];
        tmod[branch]=finish-nofunction+1-omod[branch]-tmod[branch];
        omod[branch]=temporary;
    }
    return(0);
}
query(int branch,int nofunction,int finish,int quality,int input,int j)
{
    int centre,nbranch;
    if(input>finish || j<nofunction)
    return(0);
    if(input<=nofunction && finish<=j)
    {
        if(quality==1)
            return(tmod[branch]);
        if(quality==2)
            return(omod[branch]);
        else
            return(finish-nofunction+1-omod[branch]-tmod[branch]);
    }
    centre=(nofunction+finish)/2;
    nbranch=2*branch;
    return(query(nbranch,nofunction,centre,(quality+ii[branch])%3,input,j)+query(nbranch+1,centre+1,finish,(quality+ii[branch])%3,input,j));
}
scan()
{
    int testcase=0;
    char c;
    c=g;
    while(c<'0' || c>'9')
        c=g;
    while(c>='0' && c<='9')
    {
        testcase=(testcase<<3)+(testcase<<1)+c-'0';
        c=g;
    }
    return(testcase);
}
int main()
{
    int n;
    int q;
    int testpass;
    int a;
    int b;
    n=scan();
    q=scan();
    while(q--)
    {
        testpass=scan();a=scan();b=scan();
        if(testpass==0)
        update(1,0,n-1,a,b);
        else printf("%d\n",query(1,0,n-1,0,a,b));
    }
    return(0);
}
