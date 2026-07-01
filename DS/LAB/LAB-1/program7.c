#include<stdio.h>
void main(){
    int d,w=0,y=0;
    printf("Enter days \n");
    while(d>7){
        if(d>365){
            y+=1;
            w=0;
            d=-365;
        }
        else{
            w+=1;
            d-=7;
        }
    }
    printf("%d year, %d weeks, %d days",y,w,d);
}