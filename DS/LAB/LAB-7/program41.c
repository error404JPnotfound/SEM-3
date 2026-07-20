#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node* first=NULL;

struct node * createnewnode(int x){
    struct node* newnode=(struct node *)malloc(sizeof(struct node));
    newnode->info=x;
    newnode->link=NULL;
    return newnode;
};

void Insertfirst(struct node *node){
    node->link=first;
    first=node;
}

void Insertlast(struct node *node){
    if(first==NULL){
        first=node;
        return;
    }
    struct node *save;
    save=first;
    while(save->link!=NULL){
        save=save->link;
    }
    save->link=node;
}

void DisplayNodes(){
    struct node *pointer=first;
    while(pointer!=NULL){
        printf("%d => ",pointer->info);
        pointer=pointer->link;
    }
}

void main(){
    int x=10,y=20;
    struct node *node1=createnewnode(x);
    Insertfirst(node1);
    struct node *node2=createnewnode(y);
    Insertlast(node2);
    DisplayNodes();
}