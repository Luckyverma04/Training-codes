#include<stdio.h>
int main(){
    int a,*p,*k,**j;
    a=2000;
    p=&a;
    *p=p+4000;  
k=p;
*k=*k+5000;
j=&k;
**j=**j+5000;
printf("A=%d\n",a);
printf("*P=%d\n",*p);
printf("K=%d\n",*k);
printf("**J=%d\n",**j);
printf("address\n");
printf("Add of A=%u\n",&a);
printf("Value of P=%u\n",p);
printf("Value of K=%u\n",k);
printf("Single *J=%d\n",*j);
return 0;

}