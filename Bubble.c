#include <stdio.h>

int main() {
    int i, j, temp, n, *p, *k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    p = &arr[0];

    for (j = 0; j < n - 1; j++) {
        k = p;
        for (i = 0; i < n - 1 - j; i++) {
            if (*k > *(k + 1)) {
                temp = *k;
                *k = *(k + 1);
                *(k + 1) = temp;
            }
            k++;
        }
    }

    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
