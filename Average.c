#include<stdio.h>
int Average(int a , int b,int c){
    return a+b+c/3;
}
int main() {
    int a,b,c;
   printf("Enter three numbers separated by spaces: ");
    scanf("%d %d %d", &a, &b, &c);
   printf("The average of three number is=%d",Average(a,b,c));
    return 0;
}