#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main(){
char word[20][50],ans[50],temp1[50],temp2[50];
int n,i,j;

printf("Enter number of words: ");
scanf("%d",&n);

printf("Enter %d words:\n",n);
for(i=0;i<n;i++){
    scanf("%s",word[i]);
    }

srand(time(0));
int r=rand()%n;

printf("Word: %s\n",word[r]);
printf("Enter its anagram: ");
scanf("%s",ans);

strcpy(temp1,word[r]);
strcpy(temp2,ans);

for(i=0;i<strlen(temp1)-1;i++){
    for(j=i+1;j<strlen(temp1);j++){
        if(temp1[i]>temp1[j]){
        char t=temp1[i];
        temp1[i]=temp1[j];
        temp1[j]=t;
        }
    }
}
for(i=0;i<strlen(temp2)-1;i++){
    for(j=i+1;j<strlen(temp2);j++){
        if(temp2[i]>temp2[j]){
            char t=temp2[i];
            temp2[i]=temp2[j];
            temp2[j]=t;
        }
    }
}
if(strcmp(temp1,temp2)==0)
printf("Valid Anagram\n");
else
printf("Not an Anagram\n");
}