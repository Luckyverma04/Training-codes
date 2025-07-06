#include <stdio.h>
#include<stdlib.h>
int main() {
    int a, b, c;
    printf("Enter three numbers separated by spaces: ");
    scanf("%d %d %d", &a, &b, &c);

    int max = (a + b + abs(a - b)) / 2; 
    max = (max + c + abs(max - c)) / 2; 

    printf("The largest number is: %d\n", max);
    return 0;
}