#include<stdio.h>
void main(){
    char c;
    printf("Enter character \n");
    scanf("%c",&c);
    if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U'){
        printf("it is a vowel \n");
    }
    else printf("It is a consonant \n");
}