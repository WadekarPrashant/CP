#include <stdio.h>
void accept (int a[5][5], int r, int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
void display (int a[5][5], int r, int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t", a[i][j]);
        }
         printf("\n");
    }
}
void DISPLAY (int b[25][5],int k)
{
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t", b[i][j]);
        }
         printf("\n");
    }
}
void compact (int a[5][5], int r, int c, int b[25][5])
{
    int k=1;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]!=0)
            {
                b[k][0]=i;
                b[k][1]=j;
                b[k][2]=a[i][j];
                k++;
            }
        }
    }
        b[0][0]=r;
        b[0][1]=c;
        b[0][2]=k-1;
        //printf("%d\n",k);
        printf("The elements of sparse matrix is: \n");
        DISPLAY (b,k);
}
void transpose1(int a[25][5], int b[25][5])
{
    int q=1;
    int m,n,t;
    m=a[0][0];
    n=a[0][1];
    t=a[0][2];
    b[0][0]=n;
    b[0][1]=m;
    b[0][2]=t;
    if(t<=0)
    {
        return;
    }
    for(int i=0;i<n;i++)
    {
        for( int p=1;p<=t;p++)
        {
            if(a[p][1]==i)
            {
            b[q][1]=a[p][0];
            b[q][0]=a[p][1];
            b[q][2]=a[p][2];
            q++;
            }
        }
    }
    printf("The simple transpose of the sparse matrix is: \n");
    DISPLAY(b,t+1);
}
void transpose2 (int a[25][5], int b[25][5])
{
    int m,n,t,S[10],T[10],j;
    m=a[0][0];
    n=a[0][1];
    t=a[0][2];
    b[0][0]=n;
    b[0][1]=m;
    b[0][2]=t;
    if(t>0)
    {
        for(int i=0;i<n;i++)
        {
            S[i]=0;
        }
        for(int i=1;i<=t;i++)
        {
            S[a[i][1]]=S[a[i][1]]+1;
        }
        T[0]=1;
        for(int i=1;i<n;i++)
        {
            T[i]=T[i-1]+S[i-1];
        }
        for(int i=1;i<=t;i++)
        {
            j=T[a[i][1]];
            b[j][0]=a[i][1];
            b[j][1]=a[i][0];
            b[j][2]=a[i][2];
            T[a[i][1]]=T[a[i][1]]+1;
        }
    }
    printf("The fast transpose of the sparse matrix is: \n");
    DISPLAY(b,t+1);
}
int main()
{
    int r,c,k,n,a[5][5],b[25][5],T[25][5];
    printf("Enter the number of rows\n");
    scanf("%d", &r);
    printf("Enter the number of columns\n");
    scanf("%d", &c);
    printf("Enter Value of matrix:\n");
    accept (a,r,c);
    display (a,r,c);
    compact (a,r,c,b);
    do
    {
        printf("Enter your choice\n");
        printf("1.Simple transpose\n");
        printf("2.Fast transpose\n");
        scanf("%d", &n);
        switch(c)
        {
            case 1:
            transpose1(b,T);
            break;

            case 2:
            transpose2(b,T);
            break;

            default:
            printf("Wrong choice");
            break;
        }
        printf("Enter 1 to continue\n");
        printf("Enter 0 to exit\n");
        scanf("%d", &k);
    }
    while (k!=0);
    return 0;
}