#include<stdio.h>
void main(){
    int x,y,z;
    printf("Enter three values \n");
    scanf("%d %d %d",&x,&y,&z);
    int a;
    x>y?(x>z?(a=x):(a=z)):(y>z?(a=y):(a=z));
    printf("%d is the largest \n",a);
}