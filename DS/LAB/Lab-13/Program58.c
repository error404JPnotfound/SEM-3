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
}

void pop(){

    struct node *pointer=first;
    first=pointer->link;
    free(pointer);
    DisplayNodes();
}

void change(int x,int y){
    int i=0;
    struct node *pointer=first;
    int z=1;
    while(i!=z){
        pointer=pointer->link;
        i++;
    }
    pointer->info=y;
}

void peek(){
    printf("%d\n",first->info);
}

void peep(int x){
    int counter=1,i=1;
    struct node *pointer=first;
    while(pointer->link!=NULL){
        counter++;
        pointer=pointer->link;
    }
    if(counter<x){
        printf("Invalid number \n");
        return;
    }
    pointer=first;
    // printf("%d ",counter);
    while(i!=counter){
        pointer=pointer->link;
        i++;
    }
    printf("%d \n",pointer->info);
    free(pointer);
    return;
}

void main(){
    int y=10;
    int z=29;
    int r=30;
    int h=2;
    push(y);
    push(z);
    push(r);
    // DisplayNodes();
    peek();
    peep(h);
}