#include<stdio.h>
#include<stdlib.h>
struct student{
    int roll_no;
    char name[20];
    char branch[20];
    int batch_no;
};
void main(){
    struct student *p;
    struct student s1;
    printf("Enter name.\n");
    scanf("%s",p->name);
    printf("Enter roll number.\n");
    scanf("%d",&p->roll_no);
    printf("Enter branch \n");
    scanf("%s",p->branch);
    printf("Enter batch number.\n");
    scanf("%d",&(p->batch_no));
    printf("%d   %d  %s     %s",p->roll_no,p->batch_no,p->name,p->branch);
}