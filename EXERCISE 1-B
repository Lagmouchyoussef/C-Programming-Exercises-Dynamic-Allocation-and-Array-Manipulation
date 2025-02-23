#include <stdio.h>
#include <stdlib.h>

int main() {
    int size, index, i;
    int *arr;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the index to delete (0 to %d): ", size - 1);
    scanf("%d", &index);

    if (index < 0 || index >= size) {
        printf("Invalid index!\n");
        free(arr);
        return 1;
    }

    for (i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr = (int *)realloc(arr, (size - 1) * sizeof(int));

    printf("Array after deletion:\n");
    for (i = 0; i < size - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}