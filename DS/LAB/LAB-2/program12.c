#include<stdio.h>
void main(){
    int d=0,x;
    printf("Enter a number.\n");
    scanf("%d",&x);
    for(int i=2;i<x;i++){
        if(x%i==0){
            d+=1;
        }
    }
    if(d==0){
        printf("it is a prime number.\n");
    }
    else printf("It is not a prime number.\n");
}