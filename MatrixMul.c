#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10];
    int i, j, k;

    printf("Enter rows and columns: ");
    scanf("%d%d", &i, &j);

    for (k = 0; k < i; k++)
        for (int j = 0; j < i; j++)
            scanf("%d", &a[k][j]);
printf("Enter second matrix:\n");

    for (k = 0; k < i; k++)
        for (int j = 0; j < i; j++)
            scanf("%d", &b[k][j]);

    for (k = 0; k < i; k++)
        for (int j = 0; j < i; j++)
            c[k][j] = a[k][j] + b[k][j];
            printf("Sum of the two matrices:\n");

    for (k = 0; k < i; k++) {
        for (int j = 0; j < i; j++)
            printf("%d ", c[k][j]);
        printf("\n");
    }
    for(k = 0; k < i; k++) {
        int rowSum=0;
        for (j = 0; j < i; j++) {
            rowSum += c[k][j];
        }
                printf("Sum of row %d: %d\n", k + 1, rowSum);

    }
    for(k = 0; k < i; k++) {
        int colSum=0;
        for (j = 0; j < i; j++) {
            colSum += c[j][k];
        }
        printf("Sum of column %d: %d\n", k + 1, colSum);
    }

    return 0;
}
