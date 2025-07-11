#include <stdio.h>
#include <string.h>
#include "D:\Assignment1(Training)/str.c"

int main() {
    char nm[20];
    int n;

    printf("\nName = ");
    fgets(nm, sizeof(nm), stdin);
    nm[strcspn(nm, "\n")] = '\0';

    n = lenstr(nm);
    printf("\nLength = %d", n);

    return 0;
}
