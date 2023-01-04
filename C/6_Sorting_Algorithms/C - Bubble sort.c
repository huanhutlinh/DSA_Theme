// [C] - Bubble sort

/* Bubble sort: This is a simple sorting algorithm
that repeatedly compares adjacent elements and swaps them
if they are in the wrong order.
 It is efficient for small data sets,
 but has a time complexity of O(n^2) for larger data sets,
 making it less efficient than other algorithms. */

#include <stdio.h>

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(void)
{
    int arr[] = {5, 3, 7, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
