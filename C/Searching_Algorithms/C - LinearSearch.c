// [C] - Linear Search

/*
Linear search:
This algorithm searches for a given element in an array by
sequentially going through each element and comparing it with the target element.
If the element is found, the algorithm returns the index of the element;
if the element is not found, the algorithm returns -1.
*/

int linear_search(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}
