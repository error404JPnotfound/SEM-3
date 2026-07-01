#include<stdio.h>
void main(){
    int size=0,small=0,large=0;
    printf("Enter the size of array.\n");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter value.\n");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        if(arr[large]<=arr[i]){
            large=i;
        }
        if(arr[small]>arr[i]){
            small=i;
        }
    }
    printf("Smallest number index is %d and largest number index is %d \n",(small+1),(large+1));
}