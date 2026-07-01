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
    int a,b;
    printf("Enter the positions you want to interchange.\n");
    scanf("%d %d",&a,&b);
    if(a>size || b>size){
        printf("Out of limits.\n");
    }
    else {
        a-=1;
        b-=1;
        int temp=arr[a];
        arr[a]=arr[b];
        arr[b]=temp;
        for(int i=0;i<size;i++){
            printf("%d ",arr[i]);
        }
    }
}