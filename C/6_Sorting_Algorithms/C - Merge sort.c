// [C] - Merge sort

/*
Merge sort:
This is a divide-and-conquer algorithm that
recursively sorts the left and right halves of the data set,
and then merges them back together in the correct order.
It has a time complexity of O(n*log(n)) and is efficient for
both small and large data sets.
*/

#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int left[], int left_size, int right[], int right_size)
{
    int i = 0, j = 0, k = 0;
    while (i < left_size && j < right_size)
    {
        if (left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }
    while (i < left_size)
        arr[k++] = left[i++];
    while (j < right_size)
        arr[k++] = right[j++];
}

void merge_sort(int arr[], int n)
{
    if (n < 2)
        return;
    int mid = n / 2;
    int *left = malloc(mid * sizeof(int));
    int *right = malloc((n - mid) * sizeof(int));
    for (int i = 0; i < mid; i++)
        left[i] = arr[i];
    for (int i = mid; i < n; i++)
        right[i - mid] = arr[i];
    merge_sort(left, mid);
    merge_sort(right, n - mid);
    merge(arr, left, mid, right, n - mid);
    free(left);
    free(right);
}

int main(void)
{
    int arr[] = {5, 3, 7, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    merge_sort(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
