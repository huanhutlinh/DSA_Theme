# Bubble Sort

In bubble sort, if the adjacent elements are in the wrong order, they are swapped continuously until the correct order is achieved. The Disadvantage of using bubble sort is that it is quite slow.

**For Example:** Consider an unordered list \[4, 6, 2, 1\].

**Pass 1**  
● 4 < 6 : no change \[4, 6, 2, 1\]  
● Now move next 6 > 2 : swap the elements \[4, 2, 6, 1\]  
● Now 6 > 1 : swap the elements \[4, 2, 1, 6\]

**Pass 2**  
● 4 > 2 : swap the elements \[2, 4, 1, 6\]  
● 4 > 1 : swap the elements \[2, 1, 4, 6\]  
● 4 < 6 : no change is needed \[2, 1, 4, 6\]

**Pass 3**  
● 2 > 1 : swap the elements \[1, 2, 4, 6\]  
● 2 < 4 : no change is needed \[1, 2, 4, 6\]  
● 4 < 6 : no change is needed \[1, 2, 4, 6\]

**Pass 4**  
● 1 < 2 : no change is needed \[1, 2, 4, 6\]  
● 2 < 4 : no change is needed \[1, 2, 4, 6\]  
● 4 < 6 : no change is needed \[1, 2, 4, 6\]

**Bubble Sort Complexity:**

![](https://www.codingninjas.com/blog/wp-content/uploads/2020/09/1.png)

It is quite impractical and too slow. Hence, for a large set of data, this sorting algorithm is not useful.

<hr/>

# Selection Sort

Selection sort repeatedly finds the minimum element from an unsorted array and puts it at the beginning of the array. It is an in-place comparison-based sorting algorithm.

Two arrays are maintained in case of selection sort:

- The unsorted array
- Sorted array

Initially, the sorted array is an empty array and an unsorted array has all the elements. It generally follows the approach of selecting the smallest element from an unsorted array and that smallest element is placed at the leftmost which becomes the part of sorted array finally.

**Steps of Selection Sort:**

- The first step is to iterate the complete array
- When we reach the end we will get to know the sorted element in the list
- Iterate that sorted element with the leftmost element in the unsorted list
- Now that leftmost element will be the part of the sorted array and will not be included in the unsorted array in the next iteration
- Steps will be repeated until all the elements are not sorted

Following image is showing the selection sort in a better way:

![](https://www.codingninjas.com/blog/wp-content/uploads/2020/09/2.png)

**Selection Sort Complexity:**

![](https://www.codingninjas.com/blog/wp-content/uploads/2020/09/3.png)

![](https://www.codingninjas.com/blog/wp-content/uploads/2020/09/4.png)

<hr/>

# Insertion Sort

It is simple and easy to implement, but it does not have an outstanding performance though. It works on the principle of a sorted item with one item at a time. Basically in each iteration of this sorting, an item is taken from the array, it is inserted at its correct position by comparing the element from its neighbour. The process is repeated until there is no more unsorted item in the list.

![](https://www.codingninjas.com/blog/wp-content/uploads/2020/09/5.png)

**Steps of Insertion Sort:**

- Leave the first element of the list, move to the next element in the array.
- Now compare with all the elements in the sorted sub-list.
- Shift all the elements in the sorted sublist that are greater than the elements to be sorted.
- Insert the element at that position.
- Repeat all the steps until the list is sorted.

**For Example:**  
Consider a list of items as 7, 4, 5, 2  
**Step 1:** There is no element on the left side of 7 so leave the element as it is.  
**Step 2:** Now, 7>4, so swap it. So new list would be 4, 7, 5, 2.  
**Step 3:** Now 7>5, so swap it as well. So new list would be 4, 5, 7, 2.  
**Step 4:** As 7>2, so swap it. The new list would be 2, 4, 5, 7.

**Complexity of Insertion Sort:**

![](https://www.codingninjas.com/blog/wp-content/uploads/2020/09/6.png)

**Importance of Insertion Sort:**

- It is important for smaller data sets, but inefficient for large data sets.
- It has less space complexity, it requires a single addition to memory space.
- It has an overall complexity of O(n2).

<hr/>

# Quick Sort

It is a commonly used sorting algorithm. It follows the approach of divide and conquers and follows the following approach.

1. Takes two empty array in which,  
    a) First array stores the elements that are smaller to the pivot element.  
    b) Second array stores the elements that are larger to the pivot element.
2. Partitioning the array and swapping them in-place.

**Steps of Quick Sort:**

- Basis of comparison would be an element that is a “pivot” element in this case.
- Take two pointers, start one pointer from the left and the other pointer from the right.
- When we have less value than the pivot element in the left pointer of the array, move it to the right by 1.
- When we have a larger value than the pivot element in the right pointer of the array, move it to left by 1.
- When we have left pointer less than a right pointer, swap the values at these locations in the array.
- Move the left pointer to the right pointer by 1 and right to left by 1.
- If the left and right pointer does not meet, repeat the steps from 1.

**Importance of Quick Sort:**

- It is very useful for sorting the arrays.
- Quick Sort is not a stable sorting algorithm.
- Its overall time complexity is O(nlogn).
- It is an in-place sorting algorithm.

**Complexity of Quick Sort:**

![](https://www.codingninjas.com/blog/wp-content/uploads/2020/09/7.png)

<hr/>

# Merge Sort

It is a sorting algorithm which follows the divide and conquers methodology. It recursively breaks down a problem into two or more sub-problems. This recursion is continued until a solution is not found that can be solved easily. Now, these sub-problems are combined together to form the array.

**Steps of Merge Sort:**

- If the [array](https://en.wikipedia.org/wiki/Array_data_structure) contains only one element return from the array.
- Now divide the complete array into two equal halves, divide until it can not be divided  
    further.
- Merge the smaller list into a new list in sorted order.

![](https://www.codingninjas.com/blog/wp-content/uploads/2020/09/8.png)

**Importance of Merge Sort:**

- It is best used for sorting the linked list.
- It is a stable sorting algorithm.
- It has an overall complexity of O(nlogn).
- It has a space complexity of O(n).

**Complexity of Merge Sort:**

![](https://www.codingninjas.com/blog/wp-content/uploads/2020/09/9.png)

<hr/>

# Heap Sort

It is a comparison-based sorting algorithm. It is also said to be the better version of selection sort. Basically the list is divided into sorted and unsorted arrays. And on a continuous basis unsorted list  
is shrunk and added to the sorted list. Heap sort first prepares a max heap. Then the first element is swapped with the last element.

**Steps of Heap Sort:**

- Call the heapify() that forms the heap from a list in O(n) operation.
- Swap the first element with the last element.
- Call the shiftDown() to shift the first new element at its appropriate position.
- Repeat the steps until the list becomes sorted.

**Complexity of Heap Sort:**

![](https://www.codingninjas.com/blog/wp-content/uploads/2020/09/10.png)
