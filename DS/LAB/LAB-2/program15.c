#include<stdio.h>
void main(){
    int n,temp;
    printf("Enter number.\n");
    scanf("%d",&n);
    int digit=0,sum=0;
    int t=n;
    while(t!=0){
        digit++;
        t/=10;
    }
    t=n;
    while(t!=0){
        int rem=t%10;
        int pow=1;
        for(int i=0;i<digit;i++){
            pow*=rem;
        }
        sum+=pow;
        t=t/10;
    }
    if(sum==n){
        printf("it is an armstrong number.\n");
    }
    else printf("It is not an armstrong number.\n");
}