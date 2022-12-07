#include<stdio.h>
#include<stdlib.h>

void readMatrix(int A[30][30], int row, int col);
void display(int A[30][30], int row, int col);
void add(int A[30][30], int B[30][30], int sum[30][30], int row, int col);
void subtract(int A[30][30], int B[30][30], int result[30][30], int row, int col);
void multiply(int A[30][30], int B[30][30], int result[30][30], int row, int col);
void transpose(int A[30][30], int trans[30][30], int row, int col);



void add(int A[30][30], int B[30][30], int sum[30][30], int row, int col)
{
  for(int i=0;i<row;i++)
    for(int j=0;j<col;j++)
      sum[i][j] = A[i][j] + B[i][j];
}


void subtract(int A[30][30], int B[30][30], int result[30][30], int row, int col)
{
  for(int i=0;i<row;i++)
    for(int j=0;j<col;j++)
      result[i][j] = A[i][j] - B[i][j];
}


void multiply(int A[30][30], int B[30][30], int result[30][30], int row, int col)
{
  for(int i=0; i < row; i++)
  {
    for(int j=0; j < col; j++)
    {
      result[i][j] = 0;
      
      for (int k = 0; k < col; k++)
      result[i][j] += A[i][k] * B[k][j];
    }
  }
}


void transpose(int A[30][30], int trans[30][30], int row, int col)
{
  for (int i = 0; i < row; i++)
    for (int j = 0; j < col; j++)
      trans[i][j] = A[j][i];
}

void readMatrix(int A[30][30], int row, int col)
{
  for (int i = 0; i < row; ++i)
  {
    for (int j = 0; j < col; ++j)
    {
      scanf("%d", &A[i][j]);
    }
  }
}


void display(int A[30][30], int row, int col)
{
  for(int i=0; i<row; i++)
  {
    for(int j=0; j<col; j++)
      printf("%d\t",A[i][j]);

    printf("\n"); 
  }
}

int main(){
    int A[30][30], B[30][30], C[30][30], row ,col ,i ,j, r2, c2, sum;
    printf("Enter the no. of rows: ");
    scanf("%d", &row);
    printf("Enter the no. of col: ");
    scanf("%d", &col);
    
    printf("Enter the 1st matrix elements:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("Enter elements: ");
            scanf("%d", &A[i][j]);
        }
    }
    display(A, row, col);
    printf("Enter the 2nd matrix elements:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("Enter elements: ");
            scanf("%d", &B[i][j]);
        }
    }
    display(B, row, col);



int choice;

  
  do
  {
    printf("\nChoose the matrix operation,\n");
    printf("----------------------------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Transpose\n");
    printf("5. Exit\n");
    printf("----------------------------\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        add(A, B, C, row, col);
        printf("Sum of matrix: \n");
        display(C, row, col);
        break;
      case 2:
        subtract(A, B, C, row, col);
        printf("Subtraction of matrix: \n");
        display(C, row, col);
        break;
      case 3:
        multiply(A, B, C, row, col);
        printf("Multiplication of matrix: \n");
        display(C, row, col);
        break;
      case 4:
        printf("Transpose of the first matrix: \n");
        transpose(A, C, row, col);
        display(C, row,col);
        printf("Transpose of the second matrix: \n");
        transpose(B, C, row, col);
        display(C,row,col);
        break;
      case 5:
        printf("Thank You.\n");
        break;
      default:
        printf("Invalid input.\n");
        printf("Please enter the correct input.\n");
    }
  }while(1);

  return 0;
}