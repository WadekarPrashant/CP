#include<stdio.h>


int main()
{
    int n, m, i, x, z,j;
     n = 5;
     m = 3;
    int alloc[5][3] = { { 0, 1, 0 },
                        { 2, 0, 0 },
                        { 3, 0, 2 },
                        { 2, 1, 1 },
                        { 0, 0, 2 } };
 
    int max[5][3] = { { 7, 5, 3 },
                      { 3, 2, 2 },
                      { 9, 0, 2 },
                      { 2, 2, 2 },
                      { 4, 3, 3 } };
 
    int avail[3] = { 3, 3, 2 };
    int f[n], res[n], index = 0;
    for (z = 0; z < n; z++)
    {
        f[z] = 0;
    }
    int need[n][m];
    for (i = 0; i < n; i++)
    {
        for (x = 0; x < m; x++)
            need[i][x] = max[i][x] - alloc[i][x];
    }
    printf("Need matrix is ");
    for(i=0;i<=5;i++)
    {
       for(j=0;j<=3;j++)
       {
         printf("%d\t", need[i][j]);
       }
       printf("\n");
    }
    int y = 0;
    for (z =0; z < 5; z++)
{
        for (i = 0; i < n; i++)
        {
            if (f[i] == 0)
            {
 
                int flag = 0;
                for (x = 0; x < m; x++)
                {
                    if (need[i][x] > avail[x])
                    {
                        flag=1;
                         break;
                    }
                }
 
                if (flag == 0)
                {
                    res[index++] = i;
                    for (y = 0; y < m; y++)
                        avail[y] += alloc[i][y];
                    f[i] = 1;
                }
            }
        }
     }
   
      int flag = 1;
       
      for(int i=0;i<n;i++)
    {
      if(f[i]==0)
      {
        flag=0;
         printf("The following system is not safe");
        break;
      }
    }
     
      if(flag==1)
    {
      printf("Following is the SAFE Sequence\n");
      for (i = 0; i < n - 1; i++)
        printf(" P%d ->", res[i]);
      printf(" P%d", res[n - 1]);
    }
     
 
    return (0);
    }