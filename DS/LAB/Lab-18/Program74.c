#include<stdio.h>

#define MAX 10

int queue[MAX];
int prio[MAX];
int f=-1,r=-1;

void Enqueue(){
    if(r>MAX-1){
        printf("Queue Overflow");
        return;
    }
    int data,p,i=0;
    printf("\nEnter data and Priority");
    scanf("%d %d",&data,&p);
    r=r+1;
    if(r==0){
        queue[r]=data;
        prio[r]=0;
        return;
    }
    while(){

    }

}