#include<stdio.h>
void main(){
    int u=0,z,size,ele,count=0;
    printf("Size of array:- ");
    scanf("%d",&size);
    int arr[size];
    int arr2[size][size];
    for(int i=0;i<size;i++){
        printf("Enter element:- ");
        scanf("%d",&ele);
        arr[i]=ele;
    }
    for(int i=0;i<size;i++){
        z=arr[i];
        for(int j=0;j<size;j++){
            if(arr2[j][0]==z){
                arr2[j][1]+=1;
                count++;
                printf("\nelement added %d %d times",arr2[j][0],arr2[j][1]);
                break;
            }
        }
        if(count==0){
            u++;
            arr2[i][0]=z;
            arr2[i][1]=1;
            printf("\nNew element added %d %d times",arr2[i][0],arr2[i][1]);
        }
        count=0;
    }
    count=0;
    z=0;
    // int arr3[u];
    // for(int i=0;i<u;i++){
    //     printf("\n %d %d",count,i);
    //     if(z<arr2[i][1]){
    //         z=arr2[i][1];
    //         count=arr2[i][0];
    //         printf("\nMax Upgraded to %d and %d times",count,z);
    //     }
    // }
   
    // if(z==1){
    //     printf("\nNo Dominant numbers found");
    // }
    // else {
    //     printf("\nThe Dominant Number is %d",count);
    // }

}