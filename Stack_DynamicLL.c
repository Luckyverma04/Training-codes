#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;

void push(int value);
void display();
void peek();
void pop();
void pushAtPosition(int pos, int value);
void popAtPosition(int pos);
int count();

int main() {
    int ch, value, pos;

    do {
        printf("\nPress 1 for Push");
        printf("\nPress 2 for Display");
        printf("\nPress 3 for Pop");
        printf("\nPress 4 for Push at Position");
        printf("\nPress 5 for Peek");
        printf("\nPress 6 for Pop at Position");
        printf("\nPress 0 to Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                display();
                break;
            case 3:
                pop();
                break;
            case 4:
                printf("Enter position to push at (0 = bottom): ");
                scanf("%d", &pos);
                printf("Enter value to push: ");
                scanf("%d", &value);
                pushAtPosition(pos, value);
                break;
            case 5:
                peek();
                break;
            case 6:
                if (top == NULL) {
                    printf("Stack is empty.\n");
                    break;
                }
                printf("Enter position to pop from (0 = top, max = %d): ", count() - 1);
                scanf("%d", &pos);
                popAtPosition(pos);
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }

    } while (ch != 0);

    return 0;
}

void push(int value) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    printf("Pushed %d onto stack.\n", value);
}

void display() {
    if (top == NULL) {
        printf("Stack is empty.\n");
        return;
    }
    struct Node* temp = top;
    printf("Stack elements (top to bottom): ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void pop() {
    if (top == NULL) {
        printf("Stack underflow.\n");
        return;
    }
    struct Node* temp = top;
    printf("Popped %d from stack.\n", temp->data);
    top = top->next;
    free(temp);
}

void peek() {
    if (top == NULL) {
        printf("Stack is empty.\n");
    } else {
        printf("Top element is: %d\n", top->data);
    }
}

void pushAtPosition(int pos, int value) {
    int total = count();
    if (pos < 0 || pos > total) {
        printf("Invalid position.\n");
        return;
    }

    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = value;

    if (pos == 0) {
        if (top == NULL) {
            newNode->next = NULL;
            top = newNode;
        } else {
            struct Node* temp = top;
            while (temp->next != NULL)
                temp = temp->next;
            newNode->next = NULL;
            temp->next = newNode;
        }
    } else if (pos == total) {
        newNode->next = top;
        top = newNode;
    } else {
        struct Node* temp = top;
        for (int i = 0; i < total - pos - 1; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    printf("Pushed %d at position %d.\n", value, pos);
}

int count() {
    int cnt = 0;
    struct Node* temp = top;
    while (temp != NULL) {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void popAtPosition(int pos) {
    int total = count();
    if (pos < 0 || pos >= total) {
        printf("Invalid position.\n");
        return;
    }

    struct Node* tempStack = NULL;
    int value;

    for (int i = 0; i < pos; i++) {
        value = top->data;
        pop();
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->next = tempStack;
        tempStack = newNode;
    }

    if (top != NULL) {
        printf("Popped %d from position %d.\n", top->data, pos);
        pop();
    }

    while (tempStack != NULL) {
        value = tempStack->data;
        push(value);
        struct Node* temp = tempStack;
        tempStack = tempStack->next;
        free(temp);
    }
}
