#include<stdio.h>
#include<string.h>
void main(){
    int n;
    printf("Enter the number of names.\n");
    scanf("%d",&n);
    char names[n][50];
    char temp[50];
    for(int i=0;i<n;i++){
        scanf("%s",names[i]);
        printf("\n");
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(names[i],names[j])>0){
                strcpy(temp,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],temp);
            }
        }
    }
    printf("\n Names in alphabetical oder. \n");
    for(int i=0;i<n;i++){
        printf("%s",names[i]);
        printf("\n");
    }
}