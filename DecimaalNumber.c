#include <stdio.h>

void Decimal(int n) {
    int binary[32];
    int i = 0;
    int count = 0;
    if (n == 0) {
        printf("Binary = 0\n");
        printf("Count of 0s = 1\n");
        return;
    }
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary = ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
        if (binary[j] == 0) {
            count++;
        }
    }

    printf("\nCount of 0s = %d\n", count);
}

int main() {
    int n;
    printf("Enter the value of n = ");
    scanf("%d", &n);

    Decimal(n);

    return 0;
}
