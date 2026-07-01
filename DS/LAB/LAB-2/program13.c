#include<stdio.h>
void main(){
    int d=0,x,y,p=0;
    printf("Enter first number and the second.\n");
    scanf("%d %d",&x,&y);
    for(int i=x;i<y;i++){
            for(int j=2;j<i;j++){
                if(i%j==0){
                    d+=1;
                }
            }
            if(d==0){
                printf("%d ",i);
                p++;
            }
        d=0;
    }
    if(p==0){
        printf("there are no prime numbers.\n");
    }
        else printf(" are the prime numbers.");
}