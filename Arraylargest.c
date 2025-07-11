#include<stdio.h>
int main(){
    int i;
    int second =-1;
if(second ==-1){
    printf("No second largest.\n");
}
    int arr[5] = {10, 20, 30, 40, 50};
    int max=arr[0];
    for(i=0;i<5;i++){
        if(arr[i]>max){
            second=max;
            max=arr[i];
        }
        else if(arr[i]>second && arr[i]<max){
            second=arr[i];
        }
    }
    printf("Largest element in the array: %d\n", max);
    printf("Second largest element in the array: %d\n", second);

    return 0;

}