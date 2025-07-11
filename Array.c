#include<stdio.h>
int main(){
    int a[10],i,sum=0 , *p;
    for(i=0;i<10;i++){
        printf("Enter the value of a[%d]= ");
        scanf("%d", &a[i]);
    }
    p=&a[0];
    for(i=0;i<10;i++){
        sum=sum+*p;
        p++;
    }       
        return 0;

}