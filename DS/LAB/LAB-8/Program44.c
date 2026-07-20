#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *first = NULL;

struct node *createnewnode(int x)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->info = x;
    node->link = NULL;
}

void InsertAtLast(struct node *node)
{
    if (first == NULL)
    {
        first = node;
        return;
    }
    else
    {
        struct node *pointer;
        pointer = first;
        while (pointer->link != NULL)
        {
            pointer = pointer->link;
        }
        pointer->link = node;
    }
}

void displaynodes()
{
    struct node *pointer = first;
    while (pointer != NULL)
    {
        printf("%d \t", pointer->info);
        pointer = pointer->link;
    }
}

void removedupes()
{
    struct node *save = first;
    struct node *prev = first;
    struct node *next = first->link;
    while (save != NULL)
    {
        prev = save;
        next = save->link;
        
        while (next!= NULL)
        {
            if (save->info == next->info)
            {
                prev->link = next->link;
                free(next);
                next=prev->link;
            }
            else{
                prev=next;
                next=prev->link;
            }
        }
        save=save->link;
    }
    displaynodes();
}

void main()
{
    int x=10;
    int y=20;
    int z=30;
    struct node *node1=createnewnode(x);
    InsertAtLast(node1);
    struct node *node2=createnewnode(y);
    InsertAtLast(node2);
    struct node *node3=createnewnode(z);
    InsertAtLast(node3);
    struct node *node4=createnewnode(x);
    InsertAtLast(node4);
    struct node *node5=createnewnode(y);
    InsertAtLast(node5);
    struct node *node6=createnewnode(z);
    InsertAtLast(node6);
    removedupes();
}