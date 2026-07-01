#include<stdio.h>
void main(){
    int m,n,final=0;
    printf("Enter two numbers.\n");
    scanf("%d %d",&m,&n);
    for(int i=m;i<=n;i++){
        final+=i;
    }
    printf("The final answer is %d",final);
}