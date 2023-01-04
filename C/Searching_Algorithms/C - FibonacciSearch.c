// [C] - FibonaciSearch

/*
Fibonacci search:
This algorithm searches for a given element in a sorted array by
using a modified version of the binary search algorithm
that narrows down the search interval using Fibonacci numbers.
If the element is found, the algorithm returns the index of the element;
if the element is not found, the algorithm returns -1.
*/

int fibonacci_search(int arr[], int n, int target)
{
    int fib2 = 0;
    int fib1 = 1;
    int fib = fib2 + fib1;
    while (fib < n)
    {
        fib2 = fib1;
        fib1 = fib;
        fib = fib2 + fib1;
    }
    int offset = -1;
    while (fib > 1)
    {
        int i = min(offset + fib2, n - 1);
        if (arr[i] < target)
        {
            fib = fib1;
            fib1 = fib2;
            fib2 = fib - fib1;
            offset = i;
        }
        else if (arr[i] > target)
        {
            fib = fib2;
            fib1 = fib1 - fib2;
            fib2 = fib - fib1;
        }
        else
            return i;
    }
    if (fib1 && arr[offset + 1] == target)
        return offset + 1;
    return -1;
}
