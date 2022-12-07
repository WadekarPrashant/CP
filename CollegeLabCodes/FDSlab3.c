#include <stdio.h>

struct student
{
    int roll_no;
    char stud_name[10];
    int marks;
    char division;
};

void accept(struct student s[10], int inp_no)
{
    int i;
    for (i = 0; i < inp_no; i++)
    {
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter Student name: ");
        scanf("%s", &s[i].stud_name);
        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
        printf("Enter Division: ");
        scanf(" %c", &s[i].division);
    }
}

void display(struct student s[10], int inp_no)
{
    printf("\n");
    int i;
    for (int i = 0; i < inp_no; i++)
    {
        printf("Roll no: %d \t", s[i].roll_no);
        printf("Student Name: %s \t", s[i].stud_name);
        printf("Marks: %d \t", s[i].marks);
        printf("Division: %c \t", s[i].division);
        printf("\n");
    }
}

void display_target(struct student s[10], int i)
{
    printf("Roll no: %d \n", s[i].roll_no);
    printf("Student Name: %s \n", s[i].stud_name);
    printf("Marks: %d \n", s[i].marks);
    printf("Division: %c \n", s[i].division);
}

void lin_search(struct student s[10], int inp_no)
{
    int tar, i;
    printf("Enter Roll no to search: ");
    scanf("%d", &tar);
    for (i = 0; i < inp_no; i++)
    {
        if (s[i].roll_no == tar)
        {
            printf("Target Found\n");
            display_target(s, i);
            break;
        }
    }
    if (i >= inp_no)
    {
        printf("Target not found");
    }
}

int bin_search(struct student s[10], int low, int high, int tar)
{
    int mid;
    if (low <= high)
    {
        mid = (low + high) / 2;
        if (s[mid].roll_no == tar)
        {
            display_target(s, mid);
        }
        else if (tar < s[mid].roll_no)
        {
            return bin_search(s, low, mid - 1, tar);
        }
        else
        {
            return bin_search(s, mid + 1, high, tar);
        }
    }
    return -1;
}
void non_rec_bin_search(struct student s[10], int inp_no, int tar)
{
    int low = 0, high = inp_no - 1;
}
int main()
{
    struct student s[10];
    int inp_no, tar;
    printf("Enter no of students: ");
    scanf("%d", &inp_no);

    accept(s, inp_no);
    display(s, inp_no);
    lin_search(s, inp_no);
    printf("Enter roll no to binary search: ");
    scanf("%d", &tar);
    bin_search(s, 0, inp_no - 1, tar);
    return 0;
}