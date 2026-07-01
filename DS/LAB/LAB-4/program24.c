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
    printf("Enter the number & then enter the location.\n");
    int a,b;
    scanf("%d %d",&a,&b);
    b-=1;
    int temp1,temp2;
    if(b<1 || b>size){
        printf("Not applicable");
    }
    else {
        for(int i=b;i<size;i++){
            if(i==b){
                temp1=arr[i];
                temp2=arr[i+1];
                arr[i]=a;
                arr[i+1]=temp1;
            }
            else {
                temp1=arr[i+1];
                arr[i+1]=temp2;
                temp2=temp1;
            }
        }
        for(int i=0;i<size;i++){
            printf("%d ",arr[i]);
        }
    }
}