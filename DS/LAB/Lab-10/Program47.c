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
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->info = x;
    newnode->link = NULL;
    y++;
    return newnode;
}

void InsertAtLast(struct node *node)
{
    if (first == NULL)
    {
        first = node;
        return;
    }
    struct node *pointer = first;
    while (pointer->link != NULL)
    {
        pointer = pointer->link;
    }
    pointer->link = node;
}

void sort()
{
    
}