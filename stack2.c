#include <stdio.h>
#include <ctype.h>
#define MAX 100

int stack[MAX];
int top = -1;

int isFull() {
    return top == MAX - 1;
}

int isEmpty() {
    return top == -1;
}

void push(int value) {
    if (isFull())
        printf("Stack Overflow\n");
    else
        stack[++top] = value;
}

int pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

int main() {
    char postfix[100];
    int i, a, b;

    printf("Enter Postfix Expression: ");
    scanf("%s", postfix);

    for (i = 0; postfix[i] != '\0'; i++) {

        if (isdigit(postfix[i])) {
            push(postfix[i] - '0');
        }

        else {
            b = pop();
            a = pop();

            switch (postfix[i]) {
                case '+': push(a + b); break;
                case '-': push(a - b); break;
                case '*': push(a * b); break;
                case '/': push(a / b); break;
            }
        }
    }

    printf("Result = %d\n", pop());
    return 0;
}