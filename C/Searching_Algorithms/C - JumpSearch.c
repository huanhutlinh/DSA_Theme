// [C] - JumpSearch

/*
Jump search:
This algorithm searches for a given element in an array by
jumping through a fixed number of elements at a time.
If the element is found, the algorithm returns the index of the element;
if the element is not found, the algorithm returns -1.
*/

#include <math.h>

int jump_search(int arr[], int n, int target)
{
    int block_size = (int)sqrt(n);
    int block_start = 0;
    while (arr[min(block_size, n) - 1] < target)
    {
        block_start += block_size;
        if (block_start >= n)
            return -1;
    }
    int block_end = min(block_start + block_size, n);
    for (int i = block_start; i < block_end; i++)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}
