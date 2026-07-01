#include<stdio.h>
void main(){
    int x,y;
    printf("Enter first then number & then the power. \n");
    scanf("%d %d",&x,&y);
    int i=1,ans=x;
    while(y!=i){
        ans*=x;
        i+=1;
    }
    printf("%d is your answer",ans);
}