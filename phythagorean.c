#include<stdio.h>
int pythagorean(int a, int b){
    return (a * a) + (b * b);
}
int main(){
    int a, b;
    printf("Enter the length of the first side: ");
    scanf("%d", &a);
    printf("Enter the length of the second side: ");
    scanf("%d", &b);
    int c = pythagorean(a, b);
    printf("The square of the hypotenuse is: %d\n", c);
    printf("The length of the hypotenuse is: %.2f\n", sqrt(c));
    return 0;

}