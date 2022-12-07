#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct student
{
    	char name[50];
	int roll_no;
	int divi;
	int marks;
};


void accept(struct student s[20], int n);
void display(struct student s[20], int n);
void linear (struct student s[20], int n);
void binary_search(struct student s[20],int n);
void selectionsort(struct student s[20], int n);
void shellsort(struct student s[20], int n);
void insertionsort(struct student s[20], int n);


void accept(struct student s[20], int n)
{
	for(int i=0;i<n;i++)
	{
	printf("Enter Name:\n");
	scanf("%s", s[i].name);
	printf("Enter roll no.:\n");
	scanf("%d", &s[i].roll_no);
	printf("Enter division.:\n");
	scanf("%d", &s[i].divi);
	printf("Enter marks.:\n");
	scanf("%d", &s[i].marks);

	}
}


void display(struct student s[20], int n)
{
    printf("Info of students are as follows: \n");
    printf("Name\tRoll no.Divi\tMarks\n");
	for(int i=0; i<n; i++)
	{
		printf("%s\t%d\t\%d\t\%d\n", s[i].name, s[i].roll_no, s[i].divi, s[i].marks);
	}
	printf("\n");
}


void linear (struct student s[20], int n)
{
	int key;
	int i=0, flag=0, pointer=0;
	printf("Enter the roll no. to be searched:\n");
	scanf("%d",&key);

	for(i=0; i<n; i++)

	{
		if(s[i].roll_no==key)
		{
			flag=1; pointer=i;
			break;

		}
	}

	if(flag==1){
		printf("The roll no. is present \n");
		printf("Name\tRoll no.Divi\tMarks\n");
		printf("%s\t%d\t\%d\t%d\n", s[i].name, s[i].roll_no, s[i].divi, s[i].marks);

	}
	else
	{
		printf("The roll no. is not found \n");
	}
}
void binary_search(struct student s[20],int n)
{
   int low = 0, high = n-1 ,mid;
   int key;
   printf("Enter roll no. to Search : ");
       scanf("%d", &key);
   while (low <= high) {
	  mid = (low+high)/2;

	  if(s[mid].roll_no==key)
	  {
         printf("\nSearch Element  : %d  : Found :  Position : %d\n", key, mid+1);

         break;
	  }
      else if(s[mid].roll_no<key)
         low = mid + 1;
      else
         high = mid - 1;
   }
        printf("Name\tRollno.\tDivi\tMarks\n");
		printf("%s\t%d\t\%d\t\%d\n", s[mid].name, s[mid].roll_no, s[mid].divi, s[mid].marks);


   if (low > high)
      printf("\nSearch Element : %d  : Not Found \n", key);
}



void selectionsort(struct student s[20], int n){
	int i, j, minpose;
	for(i=0; i<=(n-2); i++){
		minpose = i;
		for(j=i+1; j<=n-1; j++){
			if(s[j].roll_no < s[minpose].roll_no){
				minpose =j;
			}
		}printf("Name\tRoll no.Divi\tMarks\n");
		printf("%s\t%d\t\%d\t%d\n", s[minpose].name, s[minpose].roll_no, s[minpose].divi, s[minpose].marks);

		if(minpose!=i){
			struct student temp;

			strcpy(temp.name, s[i].name);
			strcpy(s[i].name, s[minpose].name);
			strcpy(s[minpose].name, temp.name);

			temp.roll_no=s[i].roll_no;
			s[i].roll_no=s[minpose].roll_no;
			s[minpose].roll_no=temp.roll_no;

			temp.divi=s[i].divi;
			s[i].divi=s[minpose].divi;
			s[minpose].divi=temp.divi;

			temp.marks=s[i].marks;
			s[i].marks=s[minpose].marks;
			s[minpose].marks=temp.marks;
		}
	}

}

void shellsort(struct student s[20], int n){
	int gap = n/2, swapped;
	struct student temp;
	do{
		do{
			swapped=0;
			for(int i=0; i<n-gap; i++){
				if(s[i].roll_no > s[i+gap].roll_no){
					strcpy(temp.name, s[i].name);
					strcpy(s[i].name, s[i+gap].name);
				    	strcpy(s[i+gap].name, temp.name);

					temp.roll_no=s[i].roll_no;
					s[i].roll_no=s[i+gap].roll_no;
					s[i+gap].roll_no=temp.roll_no;

					temp.divi=s[i].divi;
					s[i].divi=s[i+gap].divi;
					s[i+gap].divi=temp.divi;

					temp.marks=s[i].marks;
					s[i].marks=s[i+gap].marks;
					s[i+gap].marks=temp.marks;
					swapped=1;
				}
			}
		}while(swapped==1);
	}while((gap=gap/2)>=1);

}

void insertionsort(struct student s[20], int n){
	int key,i,j;
	for(i=0;i<n;i++){
		int curr=i, prev= i-1;
		while(prev>=0 && s[prev].roll_no>s[curr].roll_no){
			struct student temp;

						strcpy(temp.name, s[prev].name);
						strcpy(s[prev].name, s[prev+1].name);
						strcpy(s[prev+1].name, temp.name);

						temp.roll_no=s[prev].roll_no;
						s[prev].roll_no=s[prev+1].roll_no;
						s[prev+1].roll_no=temp.roll_no;

						temp.divi=s[prev].divi;
						s[prev].divi=s[prev+1].divi;
						s[prev+1].divi=temp.divi;

						temp.marks=s[prev].marks;
						s[prev].marks=s[prev+1].marks;
						s[prev+1].marks=temp.marks;
		}
	}

}

int main()
{
	int n, choice;
	struct student s[20];
	printf("Enter number of students: ");
	scanf("%d",&n);
	accept(s,n);
	display(s,n);

	do{
	  printf("\nChoose the operation to be performed:\n");
	  printf("--------------------------\n");
	  printf("1.Linear Search\n");
	  printf("2.Binary Search\n");
	  printf("3.Selection Sort\n");
	  printf("4.Shell Sort\n");
	  printf("5.Inertion Sort\n");

	  printf("--------------------------\n");
	  printf("Enter your Choice :");
	  scanf("%d",&choice);

	  switch(choice){

	    case 1: linear(s,n);

	 	    	  break;
        case 2: binary_search(s,n);
                  break;

        case 3: selectionsort(s,n);
        		display(s,n);
        		break;

        case 4: shellsort(s,n);
        		display(s,n);
        		break;

        case 5: insertionsort(s,n);
        		display(s,n);
        		break;
        default:
        printf("Invalid");
       }
	  }while(1);


	return 0;
}
