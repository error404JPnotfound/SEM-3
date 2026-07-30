#include <stdio.h>
#include <ctype.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int x) {
    stack[++top] = x;
}

int pop() {
    return stack[top--];
}

int evaluate(char postfix[]) {
    int i = 0;

    while (postfix[i] != '\0') {
        char ch = postfix[i];

        if (ch == ' ') {
            i++;
            continue;
        }

        if (isdigit(ch)) {
            push(ch - '0');
        } else {
            int b = pop();
            int a = pop();

            switch (ch) {
                case '+':
                    push(a + b);
                    break;
                case '-':
                    push(a - b);
                    break;
                case '*':
                    push(a * b);
                    break;
                case '/':
                    push(a / b);
                    break;
                case '%':
                    push(a % b);
                    break;
                default:
                    printf("Invalid operator!\n");
                    return -1;
            }
        }

        i++;
    }

    return pop();
}

int main() {
    char postfix[MAX];

    printf("Enter postfix expression: ");
    scanf("%s", postfix);

    printf("Result = %d\n", evaluate(postfix));

    return 0;
}