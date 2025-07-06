#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers separated by space: ");
    scanf("%d %d", &a, &b);

    if (a == b) {
        printf("The two integers are equal.\n");
    } else {
        printf("The two integers are not equal.\n");
    }
}