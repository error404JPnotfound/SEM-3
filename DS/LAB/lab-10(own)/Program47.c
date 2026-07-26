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

void sort() {
  if (first == NULL) {
    printf("The Linklist is empty");
    return;
  }
  int c = 0;
  struct node *save = first;
  struct node *next = save;
  struct node *savthipachad = first;
  struct node *prev = save;
  while (save != NULL) {
    c++;
    if (c != 1) {
      save = save->link;
      if (save == NULL) {
        break;
      }
      if (c != 2) {
        savthipachad = savthipachad->link;
      }
    } else
      savthipachad = first;
    prev = save;
    next = save->link;
    while (next != NULL) {
      if (save->info > next->info) {
        prev->link = next->link;
        next->link = save;
        if (c == 1) {
          first = next;
          save = first;
          prev = save;
          savthipachad = first;
        } else {
          savthipachad->link = next;
          save = savthipachad->link;
          prev = save;
        }
        next = save->link;
      } else {
        next = next->link;
        prev = prev->link;
      }
    }
  }
}

int main() {
  InsertAtLast(42);
  InsertAtLast(-17);
  InsertAtLast(99);
  InsertAtLast(3);
  InsertAtLast(58);
  InsertAtLast(-42);
  InsertAtLast(17);
  InsertAtLast(99);
  InsertAtLast(0);
  InsertAtLast(-1);
  InsertAtLast(73);
  InsertAtLast(15);
  InsertAtLast(-17);
  InsertAtLast(64);
  InsertAtLast(8);
  InsertAtLast(100);
  InsertAtLast(-5);
  InsertAtLast(42);
  InsertAtLast(27);
  InsertAtLast(-100);

  printf("Before sorting:\n");
  DisplayNodes();

  sort();

  printf("\n\nAfter sorting:\n");
  DisplayNodes();

  return 0;
}