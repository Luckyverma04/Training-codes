#include<stdio.h>
int main(){
    char nm[20];
    int i;
    printf("\nName=");
for(i=0;nm[i]!='\0';i++){
    printf("%c",nm[i]);
}
    gets(nm);
    printf("\nSN=");
    gets("sn");
    printf("Nm=%s\n",nm);
return 0;

}