#include <stdio.h>
#include <stdlib.h>

struct Node {
    int coeff;
    int exp;
    struct Node* next;
};

void insertTerm(struct Node** head, int c, int e) {
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->coeff = c;
    newnode->exp = e;
    newnode->next = NULL;

    if (*head == NULL) {
        *head = newnode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode;
}

void displayPoly(struct Node* head) {
    if (head == NULL) {
        printf("0\n");
        return;
    }
    while (head != NULL) {
        printf("%dx^%d", head->coeff, head->exp);
        head = head->next;
        if (head != NULL) {
            printf(" + ");
        }
    }
    printf("\n");
}

int main() {
    struct Node* poly1 = NULL;
    struct Node* poly2 = NULL;
    struct Node* result = NULL;
    int n1, n2, c, e;

    printf("Enter number of terms for Polynomial 1: ");
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++) {
        printf("Enter coeff and exponent for term %d: ", i + 1);
        scanf("%d %d", &c, &e);
        insertTerm(&poly1, c, e);
    }

    printf("Enter number of terms for Polynomial 2: ");
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++) {
        printf("Enter coeff and exponent for term %d: ", i + 1);
        scanf("%d %d", &c, &e);
        insertTerm(&poly2, c, e);
    }

    printf("\nPolynomial 1: ");
    displayPoly(poly1);
    printf("Polynomial 2: ");
    displayPoly(poly2);

    struct Node* p1 = poly1;
    struct Node* p2 = poly2;

    while (p1 != NULL && p2 != NULL) {
        if (p1->exp > p2->exp) {
            insertTerm(&result, p1->coeff, p1->exp);
            p1 = p1->next;
        } 
        else if (p1->exp < p2->exp) {
            insertTerm(&result, p2->coeff, p2->exp);
            p2 = p2->next;
        } 
        else {
            int sumCoeff = p1->coeff + p2->coeff;
            insertTerm(&result, sumCoeff, p1->exp);
            p1 = p1->next;
            p2 = p2->next;
        }
    }

    while (p1 != NULL) {
        insertTerm(&result, p1->coeff, p1->exp);
        p1 = p1->next;
    }

    while (p2 != NULL) {
        insertTerm(&result, p2->coeff, p2->exp);
        p2 = p2->next;
    }

    printf("\nResultant Polynomial After Addition:\n");
    displayPoly(result);

    return 0;
}