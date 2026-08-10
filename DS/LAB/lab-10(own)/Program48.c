#include <stdio.h>
#include <stdlib.h>

struct node {
  int info;
  struct node *link;
};

struct node *first = NULL;
void DisplayNodes() {
  struct node *pointer = first;
  while (pointer != NULL) {
    printf(" %d => ", pointer->info);
    pointer = pointer->link;
  }
}

struct node *createnewnode() {
  struct node *newnode = (struct node *)malloc(sizeof(struct node));
  newnode->link = NULL;
  return newnode;
}

void InsertAtLast(int x) {
  struct node *node1 = createnewnode();
  node1->info = x;
  if (first == NULL) {
    first = node1;
    return;
  }
  struct node *pointer = first;
  while (pointer->link != NULL) {
    pointer = pointer->link;
  }
  pointer->link = node1;
  return;
}

void replace(int k) {
  if (first == NULL) {
    printf("NA");
    return;
  }
  int h = 1;
  struct node *p = first;
  while (p->link != NULL) {
    p = p->link;
    h++;
  }
  if (h < k) {
    printf("Not applicable");
    return;
  }
  struct node *np = first;
  struct node *pp = first;
  struct node *next = first;
  struct node *prev = first;
  int i = 0;
  for(int i=1; i<k; i++) {
    pp = prev;
    prev = prev->link;
  }
  i = 1;
  for(int i=1; i<h-k+1;i++){
    np = next;
    next = next->link;
  }
  if (pp != NULL) {
    pp->link = next;
  } else
    first = next;

  if (np != NULL) {
    np->link = prev;
  } else
    first = prev;

  struct node *temp = prev->link;
  prev->link = next->link;
  next->link = temp;
}

void main(){
  int a=10;
  int b=20;
  int c=30;
  int d=40;
  int e=50;
  int f=2;
  InsertAtLast(a);
  InsertAtLast(b);
  InsertAtLast(c);
  InsertAtLast(d);
  InsertAtLast(e);
  DisplayNodes();
  printf("\n");
  replace(2);
  DisplayNodes();
}