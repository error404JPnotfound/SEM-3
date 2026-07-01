#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *link;
}node;

int main(){
    int n;
    printf("How many nodes you want to create : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        node *first = (node *)malloc(sizeof(node));
    }
}