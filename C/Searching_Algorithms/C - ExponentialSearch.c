// [C] - Exponential Search

/*
Exponential search:
This algorithm searches for a given element in a sorted array by
starting with the range containing the element
and exponentially increasing the range until the element is found
or the range exceeds the size of the array.
If the element is found, the algorithm returns the index of the element;
if the element is not found, the algorithm returns -1.
*/

int exponential_search(int arr[], int n, int target)
{
    if (arr[0] == target)
        return 0;
    int i = 1;
    while (i < n && arr[i] <= target)
        i *= 2;
    int low = i / 2;
    int high = min(i, n);
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
