#include <stdio.h> #include<omp.h> #include <stdlib.h>
void merge(int arr[], int left, int mid, int right)
{
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    // Create temporary arrays int L[n1], R[n2];
    // Copy data to temporary arrays L[] and R[] for (i = 0; i < n1; i++){
    L[i] = arr[left + i];
}
for (j = 0; j < n2; j++)
{
    R[j] = arr[mid + 1 + j];
}
// Merge the temporary arrays back into arr[left..right]i = 0;
j = 0;
k = left;
while (i < n1 && j < n2)
{
    if (L[i] <= R[j])
    {
    }
    else
    {
    }
    k++;
}

arr[k] = L[i];
i++;

arr[k] = R[j];
j++;

// Copy the remaining elements of L[], if any while (i < n1)
{
    arr[k] = L[i];
    i++;
    k++;
}
// Copy the remaining elements of R[], if any while (j < n2)
{
    arr[k] = R[j];
    j++;
    k++;
}
}
void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        // Same as (left+right)/2, but avoids overflow for la int mid = left + (right - left) / 2;
        // Sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        // Merge the sorted halves merge(arr, left, mid, right);
    }
}

int main()
{
    int arr[28000];
    double start, end;
    for (int i = 0; i < 28000; i++)
    {
        arr[i] = rand();
    }
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    // printf("Given array is
    \n ");#pragma omp parallel for (int i = 0; i < arr_size; i++)
    {
        // printf("%d ", arr[i]);
        // printf("\n");
        start = omp_get_wtime();
        mergeSort(arr, 0, arr_size - 1);
        end = omp_get_wtime();
    }
    printf("%f \n", end - start);

    /*printf("Sorted array is \n"); for (int i = 0; i < arr_size; i++) printf("%d ", arr[i]); printf("\n");*/

    return 0;
}
