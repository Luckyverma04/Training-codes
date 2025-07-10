#include<stdio.h>
int linearSearch(int arr[],int n,int key){
int *p = arr;
    for(int i=0;i<n;i++){
        if(*(p+i) == key){
            return i; 
        }
    }
            return -1;
}
int main(){
    int n , key;
    printf("Enter the number : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    printf("Enter the key to search: ");
    scanf("%d",&key);
    int result = linearSearch(arr,n,key);
    if(result != -1){
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }
    printf("U want the update this index? (1 for yes, 0 for no): ");
    int updateChoice;
    scanf("%d", &updateChoice);
    if (updateChoice == 1) {
        int newValue;
        printf("Enter the new value for index %d: ", result);
        scanf("%d", &newValue);
        arr[result] = newValue;
        printf("Updated array:\n"); 
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }else{
        printf("No update in the array\n");
    }
    return 0;
}
