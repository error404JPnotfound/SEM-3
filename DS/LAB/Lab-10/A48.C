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

struct Node* swapKthNodes(struct Node* head, int n, int k) {
    if (k > n || k <= 0) {
        printf("Invalid value of k.\n");
        return head;
    }

    if (2 * k - 1 == n) {
        return head;
    }

    struct Node* prev1 = NULL;
    struct Node* curr1 = head;
    for (int i = 1; i < k; i++) {
        prev1 = curr1;
        curr1 = curr1->link;
    }

    struct Node* prev2 = NULL;
    struct Node* curr2 = head;
    for (int i = 1; i < n - k + 1; i++) {
        prev2 = curr2;
        curr2 = curr2->link;
    }

    if (prev1 != NULL) {
        prev1->link = curr2;
    } else {
        head = curr2;
    }

    if (prev2 != NULL) {
        prev2->link = curr1;
    } else {
        head = curr1;
    }

    struct Node* temp = curr1->link;
    curr1->link = curr2->link;
    curr2->link = temp;

    return head;
}

int main() {
    int n, value, k;
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

    printf("Enter the value of k: ");
    scanf("%d", &k);

    printf("\nOriginal List: ");
    printList(head);

    head = swapKthNodes(head, n, k);

    printf("After Swapping: ");
    printList(head);

    return 0;
}
