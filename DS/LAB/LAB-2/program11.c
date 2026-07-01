#include<stdio.h>
void main(){
    int num,d=0;
    printf("Enter num.\n");
    scanf("%d",&num);
    int i=2;
    if(num>0){
        while(i<num){
            if(num%i==0){
            d+=1;
            printf("%d ,",i);
            }
            i++;
        }
        if(d!=0){
            printf(" are the factorials of %d",num);
        }
        else printf("%d is a prime number ",num);
    }
    else printf("not applicable");
}