#include <stdio.h>

int main() {
    int num, digit;
    int min = 9, max = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        min = max = 0;
    }

    while (num > 0) {
        digit = num % 10; 

        if (digit > max)
            max = digit;

        if (digit < min)
            min = digit;

        num = num / 10; 
    }

    printf("Smallest digit: %d\n", min);
    printf("Largest digit: %d\n", max);

    return 0;
}
