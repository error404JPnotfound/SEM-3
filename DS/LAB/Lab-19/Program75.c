#include <stdio.h>
#include <stdlib.h>

struct Node {
  int key;
  struct Node *left;
  struct Node *right;
};

struct Node *root = NULL;

struct Node *newNode(int item) {
  struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}

struct Node *insert(struct Node *node, int key) {

  if (node == NULL) {
    return newNode(key);
  }

  if (node->key == key) {
    return node;
  }
  if (node->key < key) {
    node->right = insert(node->right, key);

  } else {
    node->left = insert(node->left, key);
  }
  return node;
}

struct Node *search(struct Node *root, int key) {

  if (root == NULL || root->key == key)
    return root;

  if (root->key < key)
    return search(root->right, key);

  return search(root->left, key);
}

struct Node *Delete(struct Node *node, int delete) {
  if (root == NULL)
    return root;
}

void Preorder(struct Node *node) {
  if (node == NULL) {
    printf("Empty Tree.");
    return;
  } else {
    printf("%d ->", node->key);
  }
  if (node->left != NULL) {
    Preorder(node->left);
  }
  if (node->right != NULL) {
    Preorder(node->right);
  }
  return;
}

void Inorder(struct Node *node) {
  if (node == NULL) {
    printf("Empty Tree");
    return;
  }
  if (node->left != NULL) {
    Inorder(node->left);
  }
  printf("%d ->", node->key);
  if (node->right != NULL) {
    Inorder(node->right);
  }
  return;
}

void Postorder(struct Node *node) {
  if (node == NULL) {
    printf("Empty Tree");
    return;
  }
  if (node->left != NULL) {
    Postorder(node->left);
  }
  if (node->right != NULL) {
    Postorder(node->right);
  }
  printf("%d ->", node->key);
  return;
}

void main() {
  while (1) {
    int choice, item;
    printf("\n1.Insert\n2.Search\n3.Delete\n4.Preorder\n5.Postorder\n6."
           "Inorder\n7,Exit");
    scanf("%d", &choice);
    switch (choice) {
    case 1:
      printf("Enter item: ");
      scanf("%d", &item);

      root = insert(root, item);
      break;

    case 2: {
      printf("Enter item to search: ");
      scanf("%d", &item);

      struct Node *result = search(root, item);

      if (result == NULL)
        printf("Element not found.");
      else
        printf("Element found.");

      break;
    }

    case 3:
      // Delete
      break;

    case 4:
      printf("Preorder: ");
      Preorder(root);
      printf("\n");
      break;

    case 5:
      printf("Postorder: ");
      Postorder(root);
      printf("\n");
      break;

    case 6:
      printf("Inorder: ");
      Inorder(root);
      printf("\n");
      break;

    case 7:
      printf("Exiting...");
      exit(0);

    default:
      printf("Invalid choice!");
    }
  }
}
