#include<stdio.h>


void accept(int A[51], int num);
void display(int A[51], int num);
void BucketSort(int A[51], int num);



void accept(int A[51], int num){
	printf("Enter the marks %d student: \n", num);
	for(int i=0; i<num; i++){
		scanf("%d", &A[i]);
	}
}

void display(int A[51], int num){
	printf("\nThe marks of students before sorting: \n");
	        for (int i = 0; i < num; i++)
	            printf("%d ", A[i]);
}

int max_element(int A[], int num){
	int max;
	max=A[0];
	for(int i=0; i<num; i++){
		if(A[i]>max){
			max=A[i];
		}
	}	return max;
}


void BucketSort(int A[51], int num){
	int i,j;
	int max= max_element(A,num);
	int bucket[51];
	for(int i=0; i<=50; i++)
		bucket[i]=0;
	for(j=0; j<num; j++){
		bucket[A[j]]++;
	}
	for(i=0,j=0; i<=50; i++){
		while (bucket[i]>0){
			A[j]=i; j++;
			bucket[i]--;
		}

	}for (int i = 0; i < num; i++){
		printf("%d\n", A[i]);
	}
	printf("\n");
}

int main(){
	int A[51], num;
	printf("Enter the number of Students: \n");
	scanf("%d", &num);
	accept(A,num);
	display(A,num);

	printf("\nThe marks of students after sorting: \n");
	BucketSort(A,num);


	return 0;
}
