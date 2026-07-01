#include<stdio.h>
void main(){
    int ans=1,x;
    printf("Enter number \n");
    scanf("%d",&x);
    while(x!=1){
        ans*=x;
        x-=1;
    }
    printf("%d",ans);
}