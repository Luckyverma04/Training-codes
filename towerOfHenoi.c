#include <stdio.h>

void TowerOfHanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        printf("Move disk 1 from rod %c to rod %c\n", from, to);
        return;
    }
    TowerOfHanoi(n-1, from, aux, to);
    printf("Move disk %d from rod %c to rod %c\n", n, from, to);
    TowerOfHanoi(n-1, aux, to, from);
}

int main() {
    int n = 3; 
    TowerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}