#include<stdio.h>
void main(){
    int sec;
    int h=0,m=0;
    printf("Enter seconds. \n");
    scanf("%d",&sec);
    while(sec>60){
        m+=1;
        if(m%60==0){
            h+=1;
            m-=60;
        }
        sec-=60;
    }
    printf("%d Hours , %d Minutes and %d seconds",h,m,sec);
}