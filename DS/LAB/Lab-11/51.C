#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int data)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

void insertFront(struct Node **head, int data)
{
    struct Node *newnode = createNode(data);
    if (*head == NULL)
    {
        *head = newnode;
        newnode->next = *head;
        return;
    }
    struct Node *temp = *head;
    while (temp->next != *head)
    {
        temp = temp->next;
    }
    newnode->next = *head;
    temp->next = newnode;
    *head = newnode;
}

void insertEnd(struct Node **head, int data)
{
    struct Node *newnode = createNode(data);
    if (*head == NULL)
    {
        *head = newnode;
        newnode->next = *head;
        return;
    }
    struct Node *temp = *head;
    while (temp->next != *head)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = *head;
}

void deletePosition(struct Node **head, int position)
{
    if (*head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    struct Node *temp = *head;
    if (position == 1)
    {
        if (temp->next == *head)
        {
            *head = NULL;
            free(temp);
            return;
        }
        struct Node *last = *head;
        while (last->next != *head)
        {
            last = last->next;
        }
        *head = temp->next;
        last->next = *head;
        free(temp);
        return;
    }
    struct Node *prev = NULL;
    for (int i = 1; i < position; i++)
    {
        prev = temp;
        temp = temp->next;
        if (temp == *head)
        {
            printf("Position out of bounds.\n");
            return;
        }
    }
    prev->next = temp->next;
    free(temp);
}

void displayList(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    struct Node *temp = head;
    do
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(head)\n");
}

int main()
{
    struct Node *head = NULL;
    int choice, data, pos;

    while (1)
    {
        printf("\n--- Singly Circular Menu ---\n1. Insert Front\n2. Delete Position\n3. Insert End\n4. Display\n5. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        if (choice == 5)
            break;

        switch (choice)
        {
        case 1:
            printf("Data: ");
            scanf("%d", &data);
            insertFront(&head, data);
            break;
        case 2:
            printf("Position: ");
            scanf("%d", &pos);
            deletePosition(&head, pos);
            break;
        case 3:
            printf("Data: ");
            scanf("%d", &data);
            insertEnd(&head, data);
            break;
        case 4:
            displayList(head);
            break;
        default:
            printf("Invalid choice.\n");
        }
    }
    return 0;
}