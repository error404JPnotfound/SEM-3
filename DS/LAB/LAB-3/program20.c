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
    int b=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;arr[j]<size;j++){
            if(arr[i]==arr[j]){
                printf("Duplicate number found.\n");
                b++;
                break;
            }
            if(b>0){
                break;
            }
        }
    }
    if(b==0){
    printf("Duplicate number not found");
    }
}