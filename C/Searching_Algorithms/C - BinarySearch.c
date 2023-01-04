// [C] - Binary Search

/*
Binary search:
This algorithm searches for a given element in a sorted array by
repeatedly dividing the search interval in half.
If the element is found, the algorithm returns the index of the element;
if the element is not found, the algorithm returns -1.
*/

int binary_search(int arr[], int n, int target)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
