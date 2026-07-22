#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* link;
};

struct Node* createNode(int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->link = NULL;
    return newNode;
}

void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->link;
    }
    printf("NULL\n");
}

struct Node* bubbleSortLinks(struct Node* head, int len) {
    if (head == NULL || head->link == NULL) {
        return head;
    }
    
    for (int i = 0; i < len; i++) {
        struct Node* current = head;
        struct Node* previous = NULL;

        while (current != NULL && current->link != NULL) {
            struct Node* next = current->link;

            if (current->data > next->data) {
                struct Node* temp = next->link;

                next->link = current;
                current->link = temp;

                if (previous == NULL) {
                    head = next;   
                } else {
                    previous->link = next; 
                }
                
                previous = next; 
            } else {
                previous = current;
                current = current->link;
            }
        }
    }
    return head;
}

int main() {
    int n, value;
    struct Node* head = NULL;
    struct Node* tail = NULL;

    printf("How many nodes do you want to create? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of nodes.\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &value);
        
        struct Node* newNode = createNode(value);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->link = newNode;
            tail = newNode;
        }
    }

    printf("\nUnsorted List: ");
    printList(head);

    head = bubbleSortLinks(head, n);

    printf("Sorted List  : ");
    printList(head);

    return 0;
}
