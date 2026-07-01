#include<stdio.h>
void main(){
    int size=0;
    printf("Enter the size of array.\n");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter value.\n");
        scanf("%d",&arr[i]);
    }
    printf("Enter the location.\n");
    int a;
    scanf("%d",&a);
    if(a<1||a>size){
        printf("Not applicable.\n");
    }
    else {
        for(int i=a-1;i<size;i++){
            arr[i]=arr[i+1];
        }
    }
    for(int i=0;i<size-1;i++){
        printf("%d",arr[i]);
    }
}