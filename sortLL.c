#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr) {
    while (ptr != NULL) {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void selectionSort(struct Node *ptr) {
    struct Node *temp;
    for (; ptr->next != NULL; ptr = ptr->next) {
        temp = ptr->next;
        while (temp != NULL) {
            if (ptr->data > temp->data) {
                int t = ptr->data;
                ptr->data = temp->data;
                temp->data = t;
            }
            temp = temp->next;
        }
    }
}

int main() {
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 41;
    third->next = fourth;

    fourth->data = 66;
    fourth->next = NULL;

    printf("Linked list before sorting:\n");
    linkedListTraversal(head);

    selectionSort(head);

    printf("\nLinked list after sorting:\n");
    linkedListTraversal(head);

    return 0;
}
