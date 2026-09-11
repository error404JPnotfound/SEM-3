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
    return;
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
    while(i!=counter){
        pointer=pointer->link;
        i++;
    }
    printf("%d \n",pointer->info);
    free(pointer);
    return;
}

void main(){
    while(1){
        int p;
        printf("Enter 1 to push\nEnter 2 to pop\nEnter 3 to peep\nEnter 4 to peek\nEnter 5 to change\nEnter 6 to Display\nEnter 0 to Exit\n");
        scanf("%d",&p);
        switch(p){
            case 0:{
                exit(0);
            }
            case 1:{
                int x;
                printf("Enter Value : ");
                scanf("%d",&x);
                push(x);
                break;
            }
            case 2:{
                pop();
                break;
            }
            case 3:{
                printf("Enter Value : ");
                scanf("%d",&p);
                peep(p);
                break;
            }
            case 4:{
                peek(p);
                break;
            }
            case 5:{
                int x,y;
                printf("Enter the element you want to change and the value: ");
                scanf("%d %d",&x,&y);
                change(x,y);
                break;
            }
            case 6:{
                DisplayNodes();
                break;
            }
        }
    }
}