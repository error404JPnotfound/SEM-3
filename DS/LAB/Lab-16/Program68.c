#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int x) {
    stack[++top] = x;
}

int pop() {
    return stack[top--];
}

int evaluate(char prefix[]) {
    int i = strlen(prefix) - 1;

    while (i >= 0) {
        char ch = prefix[i];

        if (ch == ' ') {
            i--;
            continue;
        }

        if (isdigit(ch)) {
            push(ch - '0');
        } else {
            int a = pop();
            int b = pop();

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

        i--;
    }

    return pop();
}

int main() {
    char prefix[MAX];

    printf("Enter prefix expression: ");
    scanf("%s", prefix);

    printf("Result = %d\n", evaluate(prefix));

    return 0;
}