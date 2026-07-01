#include<stdio.h>
#include<stdlib.h>
void main(){
    char arr[100];
    int n=0;
    printf("Enter string : ");
    scanf("%s",arr);
    for(int i=0;i<100;i++){
        if(arr[i]=='\0'){
            break;
        }
        n++;
    }
    char *ptr;
    ptr =arr;
    int flag=0;
    for(int i=0;i<(n/2);i++){
        if(*(ptr+i)!=*(ptr+(n-1-i))){
            flag++;
            break;
        }
    }
    if(flag==0){
        printf("True\n");
    }
    else printf("False.\n");
}