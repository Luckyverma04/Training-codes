#include <stdio.h>

void change(int arr[]) {
    int i;
    for(i = 0; i < 5; i++) {
        arr[i] = arr[i] + 1000;
    }
}

int main() {
    int i;
    int arr[5] = {1, 2, 3, 4, 5};
    change(arr);
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);  
    }
    return 0;
}
