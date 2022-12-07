#include <stdio.h>
#include<limits.h>

struct stud
{
int rln;
char name[10];
int marks;
};

void accept(struct stud s[10] ,int n )
{

printf("Enter the roll no , name , marks at : \n");
         for(int i=0 ; i<n;i++)
           {

        scanf(" %d " , &s[i].rln );
        scanf(" %s " , s[i].name );
        scanf(" %d " ,  &s[i].marks );
           }

}

void display(struct stud s[10] , int n )
{
printf("\n roll no.  name   marks :");
          for(int i=0 ; i<n;i++)
             {
                printf("\n %d \t  %s  \t  %d" , s[i].rln , s[i].name , s[i].marks);
             }
}

void insertionSort(struct stud s[10], int n)
{
accept(s , n);
int i;
struct stud tmp;
  for (i = 1; i < n; i++) {
        tmp = s[i];
    int j = i - 1;


    while (tmp.rln < s[j].rln && j >= 0) {
      s[j + 1].rln = s[j].rln;
      --j;
    }
    s[j + 1] = tmp;
  }

      printf("\n");
      printf("\nThe sorted student details  are given below\n");
      for (i = 0; i < n; i++)
      {
          printf(" \n %d \t %s \t %d ", s[i].rln , s[i].name , s[i].marks);
      }
}



void shellSort(struct stud s[10], int n)
{
accept(s , n);
    int i, j, m;
    int temp;
    for (m = n / 2; m > 0; m /= 2) {
        for (j = m; j < n; j++) {
            for (i = j - m; i >= 0; i -= m) {
                if (s[i + m].rln >= s[i].rln) {
                    break;
                } else {
                    temp = s[i].rln;
                    s[i].rln = s[i + m].rln;
                    s[i + m].rln = temp;
                }
            }
        }
    }
    printf("\n");
    printf("\nThe sorted student details  are given below\n");
    for (i = 0; i < n; i++) {
        printf(" \n %d \t %s \t %d ", s[i].rln , s[i].name , s[i].marks);
    }
}

int main()

{
  int  n , ch;
  struct stud s[20];
    printf("\nEnter the number of students: ");
    scanf("%d", &n);

    printf("\nEnter the choice : \n  1 : Insertion Sort \n 2 : Shell Sort\n ");
    scanf("%d" , &ch );
    switch(ch)
    {
    case 1:
    insertionSort(s , n);
    case 2:
    shellSort(s , n);
    }




return 0;
}
