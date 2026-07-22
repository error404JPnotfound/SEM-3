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

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

struct Node* insertGCDNodes(struct Node* head) {
    if (head == NULL || head->link == NULL) {
        return head;
    }

    struct Node* current = head;

    while (current->link != NULL) {
        struct Node* nextNode = current->link;

        int gcdValue = findGCD(current->data, nextNode->data);
        struct Node* gcdNode = createNode(gcdValue);

        current->link = gcdNode;
        gcdNode->link = nextNode;

        current = nextNode;
    }
    return head;
}

int main() {
    int n, value;
    struct Node* head = NULL;

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
        } else {
            struct Node* temp = head;
            while (temp->link != NULL) {
                temp = temp->link;
            }
            temp->link = newNode;
        }
    }

    printf("\nOriginal List: ");
    printList(head);

    head = insertGCDNodes(head);

    printf("List after inserting GCD nodes: ");
    printList(head);

    return 0;
}
