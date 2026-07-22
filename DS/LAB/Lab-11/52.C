#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insert(struct Node** head, int data) {
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->next = NULL;

    if (*head == NULL) {
        *head = newnode;
        newnode->next = *head;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != *head) {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = *head;
}

void display(struct Node* head) {
    if (head == NULL) return;
    struct Node* temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(head)\n");
}

int main() {
    struct Node* head = NULL;
    struct Node* head1 = NULL;
    struct Node* head2 = NULL;
    int n, val;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &val);
        insert(&head, val);
    }

    printf("\nOriginal Circular List:\n");
    display(head);

    if (head == NULL) return 0;

    struct Node* mid = head;
    struct Node* end = head;

    while (end->next != head && end->next->next != head) {
        end = end->next->next;
        mid = mid->next;
    }

    if (end->next->next == head) {
        end = end->next;
    }

    head1 = head;
    head2 = mid->next;
    end->next = mid->next;
    mid->next = head;

    printf("\nFirst Half Circular List:\n");
    display(head1);

    printf("\nSecond Half Circular List:\n");
    display(head2);

    return 0;
}