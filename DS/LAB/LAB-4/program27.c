#include<stdio.h>
void main(){
    int size;
    printf("Enter the size of array.\n");
    scanf("%d",&size);
    int arr[size];
    int arr1[size-1];
    for(int i=0;i<size;i++){
        printf("Enter value.\n");
        scanf("%d",&arr[i]);
    }
    int a;
    printf("enter value.\n");
    scanf("%d",&a);
    for(int i=0;i<size-1;i++){
        if(arr[i]==a){
            arr1[i]=arr[i+1];
            for(int j=i+1;j<size;j++){
                arr1[j]=arr[j+1];
            }
            break;
        }
        arr1[i]=arr[i];
    }
    for(int i=0;i<size-1;i++){
        printf("%d  ",arr1[i]);
    }
}