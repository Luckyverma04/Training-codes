#include <stdio.h>
#include "D:/Assignment1(Training)/largest.c"  
int main() {
    int a[10], i, fl;
    for(i = 0; i < 10; i++) {
        printf("Value = ");
        scanf("%d", &a[i]);
    }

    fl = large(a, 10);
    printf("\nFL = %d\n", fl);

    return 0;
}
