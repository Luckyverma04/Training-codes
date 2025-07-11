#include<stdio.h>
int demo(int x);
void main(){
    int n,f;
    printf("Enter the value of N:");
    scanf("%d",&n);
    f=demo(n);
    printf("\n Ans=%d",f);
}
int demo(int x){
    if(x==0){
        return 1;

    }
    else{
        return(x*demo(x-1));
        
    }
}