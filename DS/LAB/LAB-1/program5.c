#include<stdio.h>
void main(){
    int year;
    printf("Enter year \n");
    scanf("%d",&year);
    if(year%4==0 && year%400==0 && year %100!=0){
        printf("year is a leap year \n");
    }
    else printf("it is not a leap year");
}