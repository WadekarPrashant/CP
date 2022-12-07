#include<stdio.h>

#include<stdlib.h>

#define MAX_SIZE 100

int item, choice, i;
int arr_queue[MAX_SIZE];
int rear = -1;
int front = -1;
int exit_p = 1;

void insert() {
    if (rear == MAX_SIZE-1)
        printf("\nQueue Reached Max!");
    else {
        printf("\nEnter The Value to be Insert : ");
        scanf("%d", &item);
        printf("\nPosition : %d , Insert Value  : %d ", rear + 1, item);
        arr_queue[rear++] = item;
    }
}

void removeData() {
    if (front == rear)
        printf("\nQueue is Empty!");
    else {
        printf("\nPosition : %d , Remove Value  : %d ", front+1, arr_queue[front]);
        front++;
    }
}

void display(){
    if (front == rear)
        printf("Empty Queue \n");
    else
    {
        printf("Queue: \n");
        for (int i = front; i < rear; i++)
            printf("%d ", arr_queue[i]); 
        printf("\n");
    }
} 

int main() {
    printf("\nSimple Queue Example - Array and Functions");
    do {
        printf("\n\n Queue Main Menu");

        printf("\n1.Insert \n2.Remove \n3.Display");
        printf("\nEnter Your Choice : ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                removeData();
                break;
            case 3:
                display();
                break;
            default:
                printf("Thank you");
                exit_p = 0;
                break;
        }
    } while (exit_p);

    return 0;
}