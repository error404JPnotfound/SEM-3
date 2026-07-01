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
    int *ptr=arr;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(*(ptr+i)>*(ptr+j)){
                int temp=*(ptr+j);
                *(ptr+j)=*(ptr+i);
                *(ptr+i)=temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        printf("%d ",*(ptr+i));
    }
}