#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define N 3

int TOP=-1;
int S[N];

int pop(){
    if(TOP==-1){
        printf("Stack Underflow \n");
        return -1;
    }
    TOP--;
    return S[TOP+1];
}

void push(int x){
    if(TOP >= N-1){
        printf("Stack Overflow");
        return;
    }
    TOP++;
    S[TOP]=x;
}

int peep(int x){
    if(TOP-x+1 <= -1){
        printf("Element Not available \n");
        return (-1);
    }
    return (S[TOP-x+1]);
}

int peek(){
    if(TOP==-1){
        printf("No elements to show \n");
        return -1;
    }
    return (S[TOP]);
}

bool isfull(){
    return TOP>=N-1;
}

bool isempty(){
    return TOP==-1;
}

void display(){
    if(TOP==-1){
        printf("Stack is empty\n");
        return;
    }
    for (int i=TOP; i>=0; i--){
        printf("%d \t",S[i]);
    }
    printf("\n");
}

void change(int x,int y){
    if(TOP==-1){
        printf("Stack is empty\n");
        return;
    }
    S[TOP-x+1]=y;
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
                printf("%d \n",peep(p));
                break;
            }
            case 4:{
                printf("%d \n",peek(p));
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
                display();
                break;
            }
        }
    }
}
