#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int queue[MAX];

int F = -1, R = -1;

int Enqueue() {

  if ((R+1)%MAX == F) {
    printf("Queue OverFlow\n");
    return 0;
  }
  int x;
  printf("Enter element : ");
  scanf("%d", &x);
  printf("\n");
  R+=1;
  queue[R] = x;

  printf("Element inserted Successfully");
  if (F == -1) {
    F = 0;
  }
  return 0;
}

void Dequeue() {

  if (F == -1) {
    printf("Queue Underflow\n");
    return;
  }

  printf("Deleted Element is %d \n", queue[F]);

  if (F == R) {
    F = -1;
    R = -1;
  }
  F = (F + 1) % MAX;
}

void Display() { 
    for (int i = F; i <= R; i++) {
      printf("%d ", queue[i]);
    }
  }

void main() {
  while (1) {
    int choice = 0;
    printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
    printf("Enter Your Choice: ");
    scanf("%d", &choice);
    switch (choice) {
    case 1: {
      Enqueue();
      break;
    }
    case 2: {
      Dequeue();
      break;
    }
    case 3: {
      Display();
      break;
    }
    case 4: {
      exit(0);
    }
    }
  }
}