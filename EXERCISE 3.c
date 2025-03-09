#include <stdio.h>
#include <stdlib.h>

// Function to fill an array with user input
void Lecture(int *arr, int size) {
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Function to display the contents of an array
void Affichage(int *arr, int size) {
    printf("The elements of the array are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to determine the number of common elements between two arrays
int commun(int *arr1, int size1, int *arr2, int size2) {
    int count = 0;
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                count++;
                break;
            }
        }
    }
    return count;
}

// Function to calculate the similarity coefficient
float rassemblance(int *arr1, int size1, int *arr2, int size2) {
    int common = commun(arr1, size1, arr2, size2);
    int max_size = (size1 > size2) ? size1 : size2;
    return (float)common / max_size;
}

// Function to return an array of common elements between two arrays
int* rassemblenceTab(int *arr1, int size1, int *arr2, int size2) {
    int common_count = commun(arr1, size1, arr2, size2);
    int *common_arr = (int *)malloc(common_count * sizeof(int));
    if (common_arr == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    int index = 0;
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                common_arr[index++] = arr1[i];
                break;
            }
        }
    }

    return common_arr;
}

// Main program to test all functions
int main() {
    int size1, size2;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    int *arr1 = (int *)malloc(size1 * sizeof(int));
    Lecture(arr1, size1);

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    int *arr2 = (int *)malloc(size2 * sizeof(int));
    Lecture(arr2, size2);

    Affichage(arr1, size1);
    Affichage(arr2, size2);

    int common = commun(arr1, size1, arr2, size2);
    printf("The number of common elements between the two arrays is: %d\n", common);

    float similarity = rassemblance(arr1, size1, arr2, size2);
    printf("The similarity coefficient is: %.2f\n", similarity);

    int *common_arr = rassemblenceTab(arr1, size1, arr2, size2);
    if (common_arr != NULL) {
        printf("The common elements between the two arrays are:\n");
        for (int i = 0; i < common; i++) {
            printf("%d ", common_arr[i]);
        }
        printf("\n");
        free(common_arr);
    }
    free(arr1);
    free(arr2);

    return 0;
}