#include<stdio.h>
void main(){
    int n,i=1,final=0;
    printf("Enter the number till you want average.\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        final+=i;
    }
    printf("The answer is %d",(final/n));
}