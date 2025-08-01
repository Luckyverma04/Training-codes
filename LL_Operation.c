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

// Case 1
struct Node *insertAtFirst(struct Node *head, int data) {
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

// Case 2
struct Node *insertAtIndex(struct Node *head, int data, int index) {
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;

    if (index == 0) {
        ptr->data = data;
        ptr->next = head;
        return ptr;
    }

    while (i != index - 1 && p != NULL) {
        p = p->next;
        i++;
    }

    if (p == NULL) {
        printf("Index out of bounds\n");
        free(ptr);
        return head;
    }

    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// Case 3
struct Node *insertAtEnd(struct Node *head, int data) {
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = NULL;
    struct Node *p = head;

    if (head == NULL) {
        return ptr;
    }

    while (p->next != NULL) {
        p = p->next;
    }
    p->next = ptr;
    return head;
}

// Case 4
struct Node *insertAfterNode(struct Node *head, struct Node *prevNode, int data) {
    if (prevNode == NULL) return head;
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}

void deleteNode(struct Node *prevNode) {
    if (prevNode == NULL || prevNode->next == NULL) return;
    struct Node *temp = prevNode->next;
    prevNode->next = temp->next;
    free(temp);
}

void deleteAtFirst(struct Node **head) {
    if (*head == NULL) return;
    struct Node *temp = *head;
    *head = (*head)->next;
    free(temp);
}

void deleteAtLast(struct Node *head) {
    if (head == NULL || head->next == NULL) return;
    struct Node *p = head;
    while (p->next->next != NULL) {
        p = p->next;
    }
    free(p->next);
    p->next = NULL;
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

    printf("Linked list before insertion:\n");
    linkedListTraversal(head);

    // Insert operations
    head = insertAtIndex(head, 3, 2);    // insert 3 at index 2
    head = insertAtEnd(head, 56);        // insert 56 at the end

    // Delete operations
    deleteAtFirst(&head);               // delete first node
    deleteNode(third);                  // delete node after 'third'
    deleteAtLast(head);                 // delete last node

    printf("\nLinked list after insertion and deletion:\n");
    linkedListTraversal(head);

    return 0;
}
