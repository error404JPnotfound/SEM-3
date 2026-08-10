#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int queue[MAX];

int F=-1,R=-1;

void Enqueue(){

    if(R>=MAX-1){

        printf("Queue Overflow\n");
        return;
    }

    int x;

    printf("Enter element : ");
    scanf("%d",&x);
    printf("\n");

    R+=1;

    queue[R]=x;

    if(F==-1){
        F=0;
    }
    printf("Element inserted Successfully");
}

void Dequeue(){

    if(F==-1){
        printf("Queue Underflow\n");
        return;
    }
    
    printf("Deleted Element is %d \n",queue[F]);
    
    if(F==R){
        F=-1;
        R=-1;
    }
    else F+=1;
}

void Display(){

    for(int i=F;i<=R;i++){
        printf("%d ",queue[i]);
    }

}

void main(){
    while(1){
        int choice=0;
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:{
                Enqueue();
                break;
            }
            case 2:{
                Dequeue();
                break;
            }
            case 3:{
                Display();
                break;
            }
            case 4:{
                exit(0);
            }
        }
    }
}