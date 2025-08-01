#include<stdio.h>
#include <stdlib.h>
#define SIZE 10
int stk[SIZE];
int top = -1;
void push(int value);
void display();
int pushAtPos(int pos, int num);
void peek();
int pop();
 int main(){
    int i,ch;
    do{
        printf("Press 1 for push:");
        printf("\n Press 2 for display:");
        printf("\n Press 3 for pop:");
        printf("\nPress 4 for push at position:");
        printf("\nPress 5 for peek:");
        printf("\nEnter your choice:");
        scanf("%d", &ch);
        switch(ch){
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &i);
                push(i);
                break;
            case 2:
                display();
                break;
                case 3:
                pop();
                break;
                case 4:
                printf("Enter position to push at: ");
                int pos, num;
                break;
                case 5:
                peek();
            default:
                printf("Invalid choice.\n");
        }

    }while(ch != 0);
    return 0;
 }
 void push(int value){
    if(top==SIZE-1){
        printf("Stack overflow.\n");
    } else {
        top++;
        stk[top] = value;
        printf("Pushed %d onto stack.\n", value);
    }
 }
 void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stk[i]);
        }
        printf("\n");
    }
 }
 int pop(){

    if (top == -1) {
        printf("Stack underflow.\n");
        return 0;
    }
    int data = stk[top];
    top--;
    printf("Popped %d from stack.\n", data);
 }
void pushAtPosition(int pos, int num) {
    if (top == SIZE - 1) {
        printf("Stack overflow.\n");
        return;
    }
    if (pos < 0 || pos > top + 1) {
        printf("Invalid position.\n");
        return;
    }
    for (int i = top; i >= pos; i--) {
        stk[i + 1] = stk[i];
    }
    stk[pos] = num;
    top++;
    printf("Pushed %d at position %d.\n", num, pos);
}
void peek(){
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Top element is: %d\n", stk[top]);
    }
}