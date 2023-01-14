#include <stdio.h>

int main()
{
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;
    printf("Enter the number of rows ");
    scanf("%d", &r);
    printf("Enter the number of columns ");
    scanf("%d", &c);

    printf("Enter the elements of first matrix \n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++)
        {
            printf("Enter element a%d%d ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }}

    printf("Enter the elements of second matrix \n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++)
        {
            printf("Enter element b%d%d ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }}
        // for (i = 0; i < r; ++i){
        // for (j = 0; j < c; ++j)
        // {
        //     printf("%d ", a[i][j]);
        //     if(j == c-1){
        //         printf("\n\n");
        //     }
            // printf("%d ", a[i][j]);
            // scanf("%d", &a[i][j]);
        // }}

        // addition of matrices 
        

}