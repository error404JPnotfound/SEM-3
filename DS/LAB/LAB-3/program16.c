#include<stdio.h>
    void main(){
        int n;
        printf("Enter the size of array. \n");
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            printf("Enter the number.\n");
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<n;i++){
            printf("%d",arr[i]);
        }
    }