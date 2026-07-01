#include<stdio.h>
void main(){
    int n;
    printf("Enter number \n");
    scanf("%d",&n);
    if(n%2!=0){
        printf("The number is odd\n");
    }
    else printf("The number is even\n");
}