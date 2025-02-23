# C-Programming-Exercises-Dynamic-Allocation-and-Array-Manipulation
Exercises focusing on dynamic memory allocation and array operations in C programming

**Exercise 1**
Write a program that asks the user for the size of an array, dynamically allocates the necessary memory, prompts the user to enter the elements, and then displays the elements of the array. Do not forget to free the memory after use.

Write a program that takes an array of integers, its size, and an index, then removes the element at the specified index by shifting the remaining elements. Do not forget to reallocate memory if necessary.

Write a program that finds the smallest element in an array created using dynamic memory allocation.

**Exercise 2**
Write a function float* Lecture(int taille) that reads the elements of an array and returns it.

Write a function void affichage(float *tab, int taille) that displays the contents of the array passed as a parameter.

Write a function float* Min_Max(float *tab, int taille) that returns the minimum value of the array and its position, as well as the maximum value and its position.

Write a function void afficher(float *tab, int taille) that displays the elements between imin and imax if imax >= imin; otherwise, it displays the message: "An error in the positioning of indices."

Test all these functions in the main program main().

**Exercise 3**
Write a function void Lecture(int *tab, int taille) that takes an array of integers and fills it.

Write a function void Affichage(int *tab, int taille) that displays the contents of the array.

Write a function int commun(int *t1, int n1, int *t2, int n2) that determines the number of common elements between the two arrays.

Write a function float rassemblance(int *t1, int n1, int *t2, int n2) that returns the similarity coefficient:
n_commun / max(n1, n2).

By modifying the body of the commun() function, write a function int* rassemblenceTab(int *t1, int n1, int *t2, int n2) that returns an array containing the common elements between t1 and t2.

Test all these functions in the main program main().
**EXERCISE 4**
Write a function int Trier(int *tab, int taille) that returns 1 if the array is sorted in ascending order, 2 if it is sorted in descending order, and 0 otherwise (if it is not sorted).

Write a function int* fusionCroissant(int *t1, int n1, int *t2, int n2) that merges two dynamic arrays passed as parameters. First, you must check if both arrays are sorted in ascending order, and then these two arrays must be merged into a new array to be returned.

Example:

3	27	38	43	9	10	82
3	9	10	27	38	43	82
Test these functions in the main program main()
