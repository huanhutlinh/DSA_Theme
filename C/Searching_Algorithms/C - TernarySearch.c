// [C] - Ternary Search

/*
Ternary search is a searching algorithm that is used
to find the position of a target element in a sorted array.
It is similar to the binary search algorithm,
but instead of dividing the array into two parts,
it divides the array into three parts
and determines which part the target element is in.
*/

int ternary_search(int arr[], int n, int target)
{
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;
        if (arr[mid1] == target)
            return mid1;
        if (arr[mid2] == target)
            return mid2;
        if (target < arr[mid1])
            right = mid1 - 1;
        else if (target > arr[mid2])
            left = mid2 + 1;
        else
        {
            left = mid1 + 1;
            right = mid2 - 1;
        }
    }
    return -1;
}
