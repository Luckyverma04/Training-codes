#include <stdio.h>

int main() {
    int month;
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    printf("You entered month number: %d\n", month);

    switch(month) {
        case 1:  printf("Month name: January\n"); break;
        case 2:  printf("Month name: February\n"); break;
        case 3:  printf("Month name: March\n"); break;
        case 4:  printf("Month name: April\n"); break;
        case 5:  printf("Month name: May\n"); break;
        case 6:  printf("Month name: June\n"); break;
        case 7:  printf("Month name: July\n"); break;
        case 8:  printf("Month name: August\n"); break;
        case 9:  printf("Month name: September\n"); break;
        case 10: printf("Month name: October\n"); break;
        case 11: printf("Month name: November\n"); break;
        case 12: printf("Month name: December\n"); break;
        default: printf("Invalid month number.\n");
    }

    return 0;
}