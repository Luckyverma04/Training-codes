#include<stdio.h>
int main() {
    int n, temp, sum = 0, rem;
    for(int i=0;i<=n;i++){
        scanf("%d",n);
    }
    printf("Enter a 3-digit number: ");
    scanf("%d", &n);

    temp = n;
    while (temp != 0) {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }

    if (sum == n) {
        printf("Yes, %d is an Armstrong number.\n", n);
    } else {
        printf("No, %d is not an Armstrong number.\n", n);
    }
    return 0;
}