// Write a menu driven program to implement following operations on the
// Doubled Ended Queue using an Array
//  Enqueue at front end, Enqueue at rear end
//  Dequeue from front end, Dequeue from rear end
//  Display all elements of the queue
#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int queue[MAX], F = -1, R = -1;

void EnqueueAtFront() {
  if (F == 0) {
    printf("Stack Overflow");
    return;
  }
  int x;
  printf("Enter element : ");
  scanf("%d", &x);
  printf("\n");
  if (F == -1) {
    F = R = 0;
  } else
    F = F - 1;

  queue[F] = x;

  printf("Element Enqueueed Successfully \n");
}

void EnqueueAtRear() {
  if (R >= MAX - 1) {

    printf("Queue Overflow\n");
    return;
  }

  int x;

  printf("Enter element : ");
  scanf("%d", &x);
  printf("\n");

  R += 1;

  queue[R] = x;

  if (F == -1) {
    F = 0;
  }
  printf("\nElement Enqueueed Successfully");
}

void DequeueAtRear() {
  if (R == -1) {
    printf("Queue Underflow\n");
    return;
  }
  printf("Dequeued Element is %d \n", queue[R]);

  if (F == R) {
    F = R = -1;
  } else
    R -= 1;
}

void DequeueAtFront() {
  if (F == -1) {
    printf("Queue Underflow\n");
    return;
  }

  printf("Dequeued Element is %d \n", queue[F]);

  if (F == R) {
    F = -1;
    R = -1;
  } else
    F += 1;
}

void Display() {

  for (int i = F; i <= R; i++) {
    printf("%d ", queue[i]);
  }
}

void main() {
  while (1) {
    int choice = 0;
    printf("\n1.Enqueue At Front\n2.Enqueue At Rear\n3.Dequeue At "
           "Front\n4.Dequeue At rear\n5.Display\n6.Exit");
    printf("Enter Your Choice: ");
    scanf("%d", &choice);
    switch (choice) {
    case 1: {
      EnqueueAtFront();
      break;
    }
    case 2: {
      EnqueueAtRear();
      break;
    }
    case 3: {
      DequeueAtFront();
      break;
    }
    case 4: {
      DequeueAtRear();
      break;
    }
    case 5: {
      Display();
      break;
    }
    case 6: {
      exit(0);
    }
    }
  }
}