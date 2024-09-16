# Card-sort-algorithm
A new way to sort an array
---------------------------------
An attempt to derive a new ordering algorithm for arranging elements from a single dimension which we called Cardsort algorithm has been completed. 
The cardsort algorithm can arrange numbers within a range from -∞ to +∞.
We used the basics of programming with some of the things we gained knowledge within the research process and understanding of different ranking algorithms.
It can be said that the complexity of this algorithm is o(n^2).

The code contains the functions 'sort' and 'cardsort'. 

sort function:
 You arrange an array of integers in ascending order.
Variables:
 : int array[]array of numbers we want to order.
: int n the number of elements of the array.
- How it works:
 - The function uses the simple order algorithm by comparing elements. If the first element is larger than the second element, they are switched.
 - This is performed via two overlapping loops, where the outer loop repeats through each element, while the inner loop compares with the next elements.

Cardsort function:
 It divides the numbers in a matrix into even and odd numbers, then arranges each set separately, and finally adds them together into an ordered matrix.
-Variables:
 - int n: number of elements of the matrix.
 - int array[ ] : The array containing the numbers to be processed.
 - int even and int odd : pointers to two dynamic arrays to store even and odd numbers respectively.
 - int e and int o : counters to track the number of even and odd numbers.
- How it works:
 - Dynamic memory is allocated to even and odd numbers using 'malloc'.
 - The 'for' loop crosses through each element in the 'array', determines whether the element is even or odd, and stores it in the appropriate array.
 - The function 'sort' is called to order even numbers and then odd numbers.
 - Ordered numbers are merged into a new 'combined' array.
 - The final ordered matrix is printed.
 - After completion, the memory allocated to the arrays is freed using 'free' to avoid memory leakage.

In sum, this code arranges the numbers in an array while preserving their categories (even and odd) first, and then outputs the ordered 
matrix at the end.

Final result:
We were able to develop the algorithm until it outperformed the bubble sort algorithm by speed by 10 seconds by experiment while maintaining the use of one computer and under the same conditions within different numerical ranges ranging from 10,000 values ​​​​to 500,000 values.
