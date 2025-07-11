#include <stdio.h>
int main() {
    int n, temp, sum, rem;
    printf("Armstrong numbers between 1 and 32767 are:\n");
    for (n = 1; n <= 32767; n++) {
        int digits = 0;
        temp = n;
        while (temp != 0) {
            digits++;
            temp /= 10;
        }
        
        sum = 0;
        temp = n;
        while (temp != 0) {
            rem = temp % 10;
            int prod = 1;
            for (int i = 0; i < digits; i++) {
                prod *= rem;
            }
            sum += prod;
            temp /= 10;
        }
        if (sum == n) {
            printf("%d\n", n);
        }
    }
    return 0;
}