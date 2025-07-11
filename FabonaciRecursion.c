#include <stdio.h>

int Fabbonaci_Recursion(int n) {
    if (n == 0) {
        return 0;
    } 
    else if (n == 1) {
        return 1;
    } else {
        return Fabbonaci_Recursion(n - 1) + Fabbonaci_Recursion(n - 2);
    }
}

int main() {
    int i, n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", Fabbonaci_Recursion(i));
    }

    return 0;
}
