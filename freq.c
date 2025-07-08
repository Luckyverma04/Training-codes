#include <stdio.h>

int main() {
    long long num;
    int digit;
    int freq[10] = {0};  

    
    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num == 0) {
        freq[0] = 1;
    }

    while (num > 0) {
        digit = num % 10;     
        freq[digit]++;         
        num = num / 10;        
    }

    printf("Digit frequencies:\n");
    for (int i = 0; i < 10; i++) {
        if (freq[i] > 0) {
            printf("Digit %d: %d times\n", i, freq[i]);
        }
    }

    return 0;
}
