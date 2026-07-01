#include<stdio.h>
#include<stdlib.h>
void main(){
    int *ptr;
    char *ptr2;
    float *ptr3;
    ptr=(int*)malloc(sizeof(int));
    ptr2=(char*)malloc(sizeof(char));
    ptr3=(float*)malloc(sizeof(float));
    free(ptr);
    free(ptr2);
    free(ptr3);
}