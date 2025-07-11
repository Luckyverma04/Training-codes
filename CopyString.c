#include <stdio.h>
#include<string.h>
#include "D:\\Assignment1(Training)\\LibraryCopy.c"

void main() {
    char s[100];
    char d[100];
    
    printf("Enter a String: ");
    gets(s);  

    reverseStr(s);
    copyStr(d, s);
    
    printf("Copy String = %s\n", d);
}
