#include<stdio.h>
void swap(int *a,int *b){
 *a =*a +*b;
 *b=*a-*b;
 *a=*a-*b;
 
}
int main(){
    int x=9 ;
    int y=10;
swap(&x,&y);
printf("After swap: x = %d, y = %d\n", x, y);
return 0;
}