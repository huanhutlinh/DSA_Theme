// [C] - Insertion sort

/*
Insertion sort:
This algorithm builds the sorted portion of the data set one element at a time
by inserting each element in the correct position in the sorted portion.
It has a time complexity of O(n^2) and is efficient for small data sets,
but less efficient for larger data sets.
 */

#include <stdio.h>

void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main(void)
{
    int arr[] = {5, 3, 7, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertion_sort(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
