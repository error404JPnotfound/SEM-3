#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node *first=NULL;

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
}

void DisplayNodes(){
    struct node *pointer=first;
    while(pointer!=NULL){
        printf(" %d => ",pointer->info);
        pointer=pointer->link;
    }
}

void reverse(){
    struct node *prev=NULL;
    struct node *save=first;
    struct node *next=NULL;
    while(save!=NULL){
        next=save->link;
        save->link=prev;
        prev=save;
        save=next;
    }
    first=prev;
    DisplayNodes();
}


void main(){
    while(1){
        int x;
        printf("\nEnter 1 for adding \nEnter 2 For reversing\n");
        scanf("%d",&x);
        switch(x){
            case 1:{
                int y;
                printf("\nEnter data \n");
                scanf("%d",&y);
                struct node *node1=createnewnode(y);
                InsertAtLast(node1);
                DisplayNodes();
                break;
            }
            case 2:{
                reverse();
            }
        }
    }
}