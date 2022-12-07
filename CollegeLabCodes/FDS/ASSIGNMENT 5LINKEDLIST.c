#include <stdio.h>
#include <stdlib.h>
struct node
{
    int value;
    char name[15];
    struct node *next;
};
void create(struct node *head);
void display(struct node *head);
void insert(struct node *head);
void del(struct node *head);
void rev(struct node *head);
void sort(struct node *head);
void merge(struct node *head, struct node *head2);
int length(struct node *head);
int main()
{
    int len, ch, c = 1;
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    head->next = NULL;
    struct node *head2;
    head2 = (struct node *)malloc(sizeof(struct node));
    head2->next = NULL;
    while (c == 1)
    {
        printf("\n------MENU------\n\n1.Create linked list\n2.Display linked list\n3.Insert in linked list\n4.Delete from linked list\n5.Reverse linked list\n6.Sort linked list\n7.Merge linked lists\n8.Length of linked list");
        printf("\n\nEnter the operation you want to perform: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\n--------------------------------------");
            printf("\nCREATING LINKED LIST\n");
            create(head);
            break;
        case 2:
            printf("\n--------------------------------------");
            printf("\nDISPLAYING LINKED LIST\n");
            display(head);
            break;
        case 3:
            printf("\n--------------------------------------");
            printf("\nINSERTING VALUE IN LINKED LIST\n");
            insert(head);
            break;
        case 4:
            printf("\n--------------------------------------");
            printf("\nDELETING VALUE FROM LINKED LIST\n");
            del(head);
            break;
        case 5:
            printf("\n--------------------------------------");
            printf("\nREVERSING LINKED LIST\n");
            rev(head);
            break;
        case 6:
            printf("\n--------------------------------------");
            printf("\nSORTING LINKED LIST\n");
            sort(head);
            break;
        case 7:
            printf("\n--------------------------------------");
            printf("\nMERGING LISTS\n");
            printf("\nEnter the other list to merge");
            create(head2);
            printf("Merged list is: ");
            merge(head, head2);
            break;
        case 8:
            printf("\n--------------------------------------");
            printf("\nLENGTH OF LINKED LIST\n");
            int l = length(head);
            printf("length of link list:%d",l);
            break;
        default:
            printf("\nEnter the valid choice");
            break;
        }
        printf("\nPress 1 to display menu again and 0 to exit.");
        scanf("%d", &c);
    }
}
void create(struct node *head)
{
    int ch = 1;
    struct node *temp;
    temp = head;
    struct node *curr;
    while (ch == 1)
    {
        curr = (struct node *)malloc(sizeof(struct node));
        printf("Enter the PRN and Name\n");
    	scanf("%d%s", &curr->value,curr->name);
        
        curr->next = NULL;
        temp->next = curr;
        temp = curr;
        printf("\nPress 1 to enter another value and 0 to exit.");
        scanf("%d", &ch);
    }
    printf("\n--------------------------------------\n\n");
}
void display(struct node* head){
		struct node* curr;
		if(head->next==NULL)
		{
			printf("list is empty");
			}

		else
		{
			curr=head->next;

			printf("PRN\t\t\tNAME\t\t\t Designation\n");

			while(curr!=NULL)
			{
				if(curr==head->next)
							{
							printf("%d\t\t%s\t\t President\n",curr->value,curr->name);
								}

				else if(curr->next==NULL)
		{
					printf("%d\t\t%s\t\tSecretary\n",curr->value,curr->name);
				}
				else
				{
				printf("%d\t\t%s\t\t Member\n",curr->value,curr->name);}
				curr =curr->next;
			}
		}printf("\n--------------------------------------\n\n");
	}
    

void insert(struct node *head)
{
    int i = 1, pos, len;
    struct node *temp;
    struct node *nnode;
    temp = head;
    nnode = (struct node *)malloc(sizeof(struct node));
    printf("\n\nEnter the position: ");
    scanf("%d", &pos);
    printf("Enter the PRN and NAME: ");
    scanf("%d%s", &nnode->value, nnode->name);
    len=length(head);
    if (pos > len + 1)
    {
        printf("\n\nData can`t be inserted");
    }
    else
    {
        while (temp != NULL && i < pos)
        {
            i++;
            temp = temp->next;
        }
        nnode->next = temp->next;
        temp->next = nnode;
    }
    printf("\nChanged list is: ");
    display(head);
}
void del(struct node *head)
{
    struct node *temp;
    struct node *prev;
    prev = head;
    int ctr = 1, pos, k;
    struct node *curr;
    curr = head->next;
    printf("\n\nEnter the position: ");
    scanf("%d", &pos);
    k = length(head);
    if (k < pos)
    {
        printf("\nData can`t be deleted");
    }
    else
    {
        while (ctr < pos && curr != NULL)
        {
            ctr++;
            prev = curr;
            curr = curr->next;
        }
        temp = curr;
        prev->next = curr->next;
        curr->next = NULL;
        free(temp);
    }
    printf("\nChanged list is: ");
    display(head);
}
void rev(struct node *head)
{
    struct node *prev;
    struct node *future;
    prev = NULL;
    struct node *curr;
    curr = head->next;
    while (curr != NULL)
    {
        future = curr->next;
        curr->next = prev;
        prev = curr;
        curr = future;
    }
    head->next = prev;
    printf("\n Reversed list is: ");
    display(head);
}
void sort(struct node *head)
{
    int len;
    len = length(head);
    struct node *prev;
    struct node *curr;
    struct node *temp;
    for (int i = 1; i < len; i++)
    {
        prev = head;
        curr = head->next;
        for (int j = 0; j < len - i; j++)
        {
            temp = curr->next;
            if (curr->value > temp->value)
            {
                prev->next = temp;
                curr->next = temp->next;
                temp->next = curr;
                prev = temp;
            }
            else
            {
                prev = curr;
                curr = curr->next;
            }
        }
    }
    printf("\n");
    display(head);
}
void merge(struct node *head, struct node *head2)
{
    struct node *curr1;
    struct node *curr2;
    struct node *temp;
    int flag;
    curr1 = head->next;
    curr2 = head2->next;
    if (curr1->value < curr2->value)
    {
        temp = head;
        flag = 1;
    }
    else
    {
        temp = head2;
        flag = 0;
    }
    while (curr1 != NULL && curr2 != NULL)
    {
        if (curr1->value < curr2->value)
        {
            temp->next = curr1;
            temp = curr1;
            curr1 = curr1->next;
        }
        else
        {
            temp->next = curr2;
            temp = curr2;
            curr2 = curr2->next;
        }
    }
    if (curr1 == NULL)
    {
        temp->next = curr2;
    }
    if (curr2 == NULL)
    {
        temp->next = curr1;
    }
    if (flag == 1)
    {
        display(head);
    }
    else
    {
        display(head2);
    }
}
int length(struct node *head)
{
    int i = 0;
    struct node *curr;
	if(head->next!=NULL){
		curr=head->next;
	}
	while(curr!=NULL){
		i++;
		curr=curr->next;
	}
	return 1;
}
  
