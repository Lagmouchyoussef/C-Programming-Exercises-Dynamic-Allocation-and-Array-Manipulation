#include <stdio.h>
#include <stdlib.h>

// Function to check if an array is sorted in ascending or descending order
int Trier(int *arr, int size) {
    int ascending = 1, descending = 1;

    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) ascending = 0;
        if (arr[i] < arr[i + 1]) descending = 0;
    }

    if (ascending) return 1;
    if (descending) return 2;
    return 0;
}

// Function to merge two sorted arrays in ascending order
int* fusionCroissant(int *arr1, int size1, int *arr2, int size2) {
    if (Trier(arr1, size1) != 1 || Trier(arr2, size2) != 1) {
        printf("Both arrays must be sorted in ascending order!\n");
        return NULL;
    }

    int *merged_arr = (int *)malloc((size1 + size2) * sizeof(int));
    if (merged_arr == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            merged_arr[k++] = arr1[i++];
        } else {
            merged_arr[k++] = arr2[j++];
        }
    }

    while (i < size1) {
        merged_arr[k++] = arr1[i++];
    }

    while (j < size2) {
        merged_arr[k++] = arr2[j++];
    }

    return merged_arr;
}


int main() {
    int size1, size2;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    int *arr1 = (int *)malloc(size1 * sizeof(int));
    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < size1; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    int *arr2 = (int *)malloc(size2 * sizeof(int));
    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < size2; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    int sorted1 = Trier(arr1, size1);
    int sorted2 = Trier(arr2, size2);

    if (sorted1 == 1) {
        printf("The first array is sorted in ascending order.\n");
    } else if (sorted1 == 2) {
        printf("The first array is sorted in descending order.\n");
    } else {
        printf("The first array is not sorted.\n");
    }

    if (sorted2 == 1) {
        printf("The second array is sorted in ascending order.\n");
    } else if (sorted2 == 2) {
        printf("The second array is sorted in descending order.\n");
    } else {
        printf("The second array is not sorted.\n");
    }

    if (sorted1 == 1 && sorted2 == 1) {
        int *merged_arr = fusionCroissant(arr1, size1, arr2, size2);
        if (merged_arr != NULL) {
            printf("The merged array is:\n");
            for (int i = 0; i < size1 + size2; i++) {
                printf("%d ", merged_arr[i]);
            }
            printf("\n");
            free(merged_arr);
        }
    } else {
        printf("Cannot merge arrays because they are not both sorted in ascending order.\n");
    }

    free(arr1);
    free(arr2);

    return 0;
}