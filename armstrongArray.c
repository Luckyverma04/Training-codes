#include <stdio.h>
#include <math.h>
int isArmstrong(int num) {
    int or = num;
    int sum = 0, digit, n = 0;
    int temp = num;
    while (temp > 0) {
        temp = temp / 10;
        n++;
    }
    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        sum += pow(digit, n); 
        temp = temp / 10;
    }

    return (sum == or);
}

int main() {
    int arr[] = {153, 10, 407, 370, 123, 371, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Armstrong number:\n");
    for (int i = 0; i < n; i++) {
        if (isArmstrong(arr[i])) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
