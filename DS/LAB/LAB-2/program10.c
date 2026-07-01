#include<stdio.h>
void main(){
    int rev=0,rem,x;
    printf("Enter number.\n");
    scanf("%d",&x);
    while(x!=0){
        rem=x%10;
        x=x/10;
        rev=rev*10+rem;
    }
    printf("%d is answer",rev);
}