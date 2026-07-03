#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

void  main() {
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Not applicable\n");
        return 1;
    }
    printf("Enter the data for the node: ");
    scanf("%d", &newNode->info);
    newNode->link = NULL;
    printf("Data in the node is  %d\n", newNode->info);
    free(newNode);
}