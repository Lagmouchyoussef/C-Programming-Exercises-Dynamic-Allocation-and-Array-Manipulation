#include <stdio.h>
#include <stdlib.h>

float* Lecture(int size) {
    float *arr = (float *)malloc(size * sizeof(float));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%f", &arr[i]);
    }

    return arr;
}

void affichage(float *arr, int size) {
    printf("The elements of the array are:\n");
    for (int i = 0; i < size; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
}

float* Min_Max(float *arr, int size) {
    float *result = (float *)malloc(4 * sizeof(float));
    if (result == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    result[0] = arr[0];
    result[1] = 0;
    result[2] = arr[0];
    result[3] = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < result[0]) {
            result[0] = arr[i];
            result[1] = i;
        }
        if (arr[i] > result[2]) {
            result[2] = arr[i];
            result[3] = i;
        }
    }

    return result;
}

void afficher(float *arr, int size) {
    int imin, imax;

    printf("Enter the starting index (imin): ");
    scanf("%d", &imin);
    printf("Enter the ending index (imax): ");
    scanf("%d", &imax);

    if (imax >= imin && imin >= 0 && imax < size) {
        printf("Elements between indices %d and %d are:\n", imin, imax);
        for (int i = imin; i <= imax; i++) {
            printf("%.2f ", arr[i]);
        }
        printf("\n");
    } else {
        printf("An error in the positioning of indices.\n");
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    float *arr = Lecture(size);
    if (arr == NULL) {
        return 1;
    }

    affichage(arr, size);

    float *min_max = Min_Max(arr, size);
    if (min_max != NULL) {
        printf("Minimum: %.2f at index %.0f\n", min_max[0], min_max[1]);
        printf("Maximum: %.2f at index %.0f\n", min_max[2], min_max[3]);
        free(min_max);
    }

    afficher(arr, size);

    free(arr);

    return 0;
}