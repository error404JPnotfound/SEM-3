#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};
struct node *first=NULL;

struct node *createnewnode(){
    struct node *node=(struct node *)malloc(sizeof(struct node));
    node->info;
    node->link=NULL;
}

void push(int x){
    struct node *node=createnewnode();
    node->info=x;
    node->link=first;
    first=node;
}

void DisplayNodes(){
    struct node *pointer=first;
    int h=0;
    while(pointer!=NULL){
        printf("%d => ",pointer->info);
        pointer=pointer->link;
        h++;
    }
    printf("\n");
}

void pop(){
    struct node *pointer=first;
    first=pointer->link;
    free(pointer);
    DisplayNodes();
}

void Checker(){

}