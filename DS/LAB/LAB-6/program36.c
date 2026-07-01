#include<stdio.h>
#include<stdlib.h>
void main(){
    int n,a=0;
    printf("Enter the number n\n");
    scanf("%d",&n);
    int *ptr=&a;
    for(int i=1;i<=n;i++){
        *ptr=*ptr+i;
    }
    printf("%d is the answer \n",*ptr);
}