#include<stdio.h>
void pointerReverse(int *p, int n) {
    int *start = p;
    int *end = p + n - 1;
    int temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main(){
    int n;
    printf("Enter the number of arr elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    pointerReverse(arr,n);
    printf("Reversed array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
    
}