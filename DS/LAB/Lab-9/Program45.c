#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node *first=NULL;
struct node *first2=NULL;

struct node *createnewnode(int x){
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->info=x;
    newnode->link=NULL;
    return newnode;
}

void InsertAtLast(struct node *node){
    if(first==NULL){
        first=node;
        return;
    }
    struct node *pointer=first;
    while(pointer->link!=NULL){
        pointer=pointer->link;
    }
    pointer->link=node;
    // free(pointer);
    return;
}
void InsertAtLast2(struct node *node){
    if(first2==NULL){
        first2=node;
        return;
    }
    struct node *pointer=first2;
    while(pointer->link!=NULL){
        pointer=pointer->link;
    }
    pointer->link=node;
    // free(pointer);
    return;
}

void displaynodes()
{
    struct node *pointer = first2;
    while (pointer != NULL)
    {
        printf("%d \t", pointer->info);
        pointer = pointer->link;
    }
    // free(pointer);

}

void copylink(struct node *node1)
{
    while (node1!= NULL)
    {
        struct node *node2 = createnewnode(node1->info);
        InsertAtLast2(node2);
        node1 = node1->link;
    }
}

void main(){
    while(1){
        int i;
        printf("\n Print 1 for Inputing value in 1st list \n 2 for copying list\n");
        scanf("%d",&i);
        switch(i){
            case 1:{
                printf("\nEnter data\n");
                scanf("%d",&i);
                struct node *node=createnewnode(i);
                InsertAtLast(node);
                break;
            }
            case 2:{
                struct node *node1=first;
                copylink(node1);
                displaynodes();
                free(node1);
                exit(0);
            }
        }
    }
}