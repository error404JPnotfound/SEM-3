#include<stdio.h>
void main(){
    int size=0;
    printf("Enter the size of array.\n");
    scanf("%d",&size);
    size+=1;
    int arr[size];
    for(int i=0;i<size-1;i++){
        printf("Enter value.\n");
        scanf("%d",&arr[i]);
    }
    int a,pos=0;
    printf("Enter value.\n");
    scanf("%d",&a);
    for(int i=0;i<size;i++){
        if(arr[i]>a){
            pos=i;
            break;
        }
    }
    int t1,t2;
    for(int i=pos;i<size-1;i++){
        if(i==pos){
            t1=arr[i];
            t2=arr[i+1];
            arr[i]=a;
            arr[i+1]=t1;
        }
        else {
            t1=arr[i+1];
            arr[i+1]=t2;
            t2=t1;
        }
    }
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
}