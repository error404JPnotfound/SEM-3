#include<stdio.h>
#include<stdlib.h>

struct node {
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

void sort(){
    struct node *save=first;
    struct node *prev=NULL;
    struct node *next=NULL;
    while(save!=NULL){
        next=save->link;
        if(save->info > next->info){
            save->link=prev;
            prev=save;
            save=next;
        }
        else{
            prev=save;
            save=save->link;
        }
    }
}