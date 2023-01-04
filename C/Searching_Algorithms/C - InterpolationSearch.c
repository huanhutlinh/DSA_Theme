// [C] Interpolation Search

/*
Interpolation search:
This algorithm searches for a given element in a sorted array by
using an interpolation formula to determine the position of the element.
If the element is found, the algorithm returns the index of the element;
if the element is not found, the algorithm returns -1.
*/

int interpolation_search(int arr[], int n, int target)
{
    int low = 0;
    int high = n - 1;
    while (low <= high && target >= arr[low] && target <= arr[high])
    {
        int pos = low + (((double)(high - low) / (arr[high] - arr[low])) * (target - arr[low]));
        if (arr[pos] == target)
            return pos;
        else if (arr[pos] < target)
            low = pos + 1;
        else
            high = pos - 1;
    }
    return -1;
}
