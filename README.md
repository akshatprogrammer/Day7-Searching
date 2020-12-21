# Day7-Searching
## What is Searching?
Searching in data-strucutre refers to the process of finding a desired element in set of items.</br>The set of items to be searched in, can be any data-structure like − list, array, linked-list, tree or graph. Search refers to locating a desired element of specified properties in a collection of items.

## Liner Search
**Algorithm**
* Start from left most element and compare  key with each element.

* If key element matches, return its index, otherwise return -1.

* Time Complexity = O(n)

* Or we can use to pointers at same time, one pointing front and other at rear. </br>
[Check Program](https://github.com/akshatprogrammer/Day7-Searching/blob/main/LinearSearch.cpp)

## Binary Search
**Algorithm**
* Pre-Requisite - > Array must be sorted.
* Case 1 − element = middle, the element is found return the index.

* Case 2 − element > middle, search for the element in the sub-array starting from middle+1 index to n.

* Case 3 − element < middle, search for element in the sub-array starting from 0 index to middle -1. </br>
[Using Iteration](https://github.com/akshatprogrammer/Day7-Searching/blob/main/BinarySearch.cpp) </br>
[Using Recursion](https://github.com/akshatprogrammer/Day7-Searching/blob/main/binarySearchRecurssive.cpp)

## Jump Search
**Algorithm**
* Pre-Requisite - > Array must be sorted.

* Input: An sorted array, size of the array and the search key

* Output − location of the key (if found), otherwise wrong location.

* Begin</br>
    blockSize := √size</br>
    start := 0</br>
    end := blockSize</br>
   while array[end] <= key AND end < size do</br>
      start := end</br>
      end := end + blockSize</br>
      if end > size – 1 then</br>
         end := size</br>
   done</br>
   for i := start to end -1 do</br>
      if array[i] = key then</br>
         return i</br>
   done</br>
   return invalid location</br>
End</br>
### The complexity of Jump Search Technique
* Time Complexity: O(√n)
* Space Complexity: O(1)</br>
[Check The solution](https://github.com/akshatprogrammer/Day7-Searching/blob/main/JumpSearch.cpp)
