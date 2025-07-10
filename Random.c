#include <stdio.h>
#include <stdlib.h>

#define TOTAL_NUMBERS 40
#define SELECTED_NUMBERS 20

int isPresent(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value)
            return 1;
    }
    return 0;
}

int main() {
    int unique40[TOTAL_NUMBERS];
    int selected20[SELECTED_NUMBERS];
    int num, count = 0;

    while (count < TOTAL_NUMBERS) {
        num = rand() % 100 + 1;
        if (!isPresent(unique40, count, num)) {
            unique40[count] = num;
            count++;
        }
    }

    count = 0;
    while (count < SELECTED_NUMBERS) {
        int index = rand() % TOTAL_NUMBERS;
        if (!isPresent(selected20, count, unique40[index])) {
            selected20[count] = unique40[index];
            count++;
        }
    }

    printf("20 Unique Random Numbers:\n");
    for (int i = 0; i < SELECTED_NUMBERS; i++) {
        printf("%d ", selected20[i]);
    }
    printf("\n");

    return 0;
}
