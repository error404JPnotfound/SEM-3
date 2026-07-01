#include<stdio.h>
void main(){
    int r;
    printf("Enter no. of rows.\n");
    scanf("%d",&r);
    for(int i=0;i<r;i++){
        int val=1;
        for(int z=1;z<=r-i-1;z++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%4d",val);
            val=val*(i-j)/(j+1);
        }
        printf("\n");
    }
}