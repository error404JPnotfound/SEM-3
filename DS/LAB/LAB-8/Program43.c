#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node* first=NULL;
struct node* first2=NULL;

struct node * createnewnode(int x){
    struct node* newnode=(struct node *)malloc(sizeof(struct node));
    newnode->info=x;
    newnode->link=NULL;
    return newnode;
};


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

void Insertlast2(struct node *node){
    if(first2==NULL){
        first2=node;
        return;
    }
    struct node *save;
    save=first2;
    while(save->link!=NULL){
        save=save->link;
    }
    save->link=node;
}

int countnodes(){
    int y=0;
    struct node *counter=first;
    while(counter!=NULL){
        y++;
        counter=counter->link;
    }
    return y;
}
int countnodes2(){
    int y=0;
    struct node *counter=first2;
    while(counter!=NULL){
        y++;
        counter=counter->link;
    }
    return y;
}

void DisplayNodes(){
    struct node *pointer=first;
    int h=0;
    int x=countnodes();
    while(h<x){
        printf("%d => ",pointer->info);
        pointer=pointer->link;
        h++;
    }
}

void DisplayNodes2(){
    struct node *pointer=first2;
    int h=0;
    int x=countnodes2();
    while(h<x){
        printf("%d => ",pointer->info);
        pointer=pointer->link;
        h++;
    }
}

void main(){
    while(1){
        printf("\n \n Enter 1 for inserting data in 1st list, 2 for second list, 3 for checking  : ");
        int x,y;
        scanf("%d",&x);
        printf("\n");
        switch(x){
            case 1:{
            printf("\n Enter data for 1st list :");
            scanf("%d",&y);
            struct node *node1=createnewnode(y);
            Insertlast(node1);
            DisplayNodes();
            break;
            }
            case 2:{
            printf("\n Enter data for 2nd list :");
            scanf("%d",&y);
            struct node *node2=createnewnode(y);
            Insertlast2(node2);
            DisplayNodes2();
            break;
            }
            case 3:{
                struct node *node1=first;
                struct node *node2=first2;
                int x1=countnodes();
                int x2=countnodes2();
                if(x1!=x2){
                    printf("This two lists cannot be same beacause they are having different length");
                    exit(0);
                }
                while(1){
                    if(node1 -> info != node2->info){
                        printf("\nThey are not same\n");
                        exit(0);
                    }
                    printf("\n They are the same \n");
                    exit(0);
                }
            }  
        }
    }



}