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

int countnodes(){
    int y=0;
    struct node *counter=first;
    while(counter!=NULL){
        y++;
        counter=counter->link;
    }
    return y;
}

void Insertbetween(struct node *node,int x){
    int count=0;
    struct node *save;
    save=first;
    int i=countnodes();
    if(x>i||x<0){
        printf("Invalid position");
        return;
    }
    else{
        if (x == 0) {
        node->link = first;
        first = node;
        return;}
        else{
        while(count!=x-1){
            save=save->link;
            count++;
        }
        node->link=save->link;
        save->link=node;
        }
    }
}

void deleteNode(int x){
    int y=countnodes();
    struct node *save;
    save=first;
    int c=0;
    if(x==1){
        first=save->link;
        free(save);
        return;
    }
    else if(x>y){
        printf("invalid");
        return;
    }
    else{
        struct node *save2;
        while(c<x-1){
            save2=save;
            save=save->link;
            c++;
        }
        save2->link=save->link;
        free(save);
    }
}

void Printnode(struct node *node){
    if(node==NULL){
        printf("\nNode does not exist\n");
    }
    else printf("%d",node->info);
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

void main(){

    while(1){
        int x,o;
        printf("\n \n \n");
        printf(" 1 for Inserting a node at First\n 2 for Inserting at last \n 3 for Inserting in between\n 4 for deleting a node\n 5 for counting total nodes \n 6 for displaying all nodes.\n 0 to exit \n");
        scanf("%d",&x);
        switch(x){
            case 0:
            printf("Exit");
            exit (0);
            case 1: 
                {
                    printf("Enter the data\n");
                    scanf("%d",&o);
                    struct node *node=createnewnode(o);
                    Insertfirst(node);
                    break;
                }      

            case 2: 
                    {
                    printf("Enter the data\n");
                    scanf("%d",&o);
                    struct node *node=createnewnode(o);
                    Insertlast(node);
                    break;
                    }

            case 3: 
                    {
                        printf("Enter the data\n");
                        scanf("%d",&o);
                        struct node *node=createnewnode(o);
                        printf("Enter the position.\n");
                        scanf("%d",&o);
                        Insertbetween(node,o);
                        break;
                    }

            case 4: 
                    {
                        printf("Enter the node you want to delete\n");
                        scanf("%d",&o);
                        deleteNode(o);
                        break;
                    }

            case 5: 
                    {
                        printf("\nTotal %d nodes are present \n",countnodes());
                        break;
                    }

            case 6: {
                    DisplayNodes();
                    break;
                }
        }   
    }
    
}