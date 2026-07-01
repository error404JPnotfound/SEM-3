#include<stdio.h>
#include<stdlib.h>
void main(){
    int size=0;
    printf("Enter the size of array.\n");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter value.\n");
        scanf("%d",&arr[i]);
    }
    int *ptr=arr,max;
    max=ptr[0];
    for(int i=0;i<size;i++){
        if(max<*(ptr+i)){
            max=ptr[i];
        }
    }
    printf("%d",max);
}