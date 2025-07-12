#include <stdio.h>
int main() {
    int k;
    int n;
    int  row;
printf("Enter the value n =");
scanf("%d",&n);
    for (row = n; row >= 1; row--) {
        for(k=row-1;k<6;k++){
            printf(" ");
        }
        for (char ch = 'A'; ch <= 'A' + row - 1; ch++) {
            printf("%c", ch);
        }
        for (char ch = 'a' + row - 2; ch >= 'a'; ch--) {
            printf("%c", ch);

        }
      printf("\n");

    }

    return 0;

}