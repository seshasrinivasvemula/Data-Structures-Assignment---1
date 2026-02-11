#include <stdio.h>
#include <ctype.h>
#define MAX 100

char stack[MAX];
int top = -1;

int isFull() {
    return top == MAX - 1;
}

int isEmpty() {
    return top == -1;
}

void push(char value) {
    if (isFull())
        printf("Stack Overflow\n");
    else
        stack[++top] = value;
}

char pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

int main() {
    char infix[100], postfix[100];
    int i = 0, j = 0;

    printf("Enter Infix Expression: ");
    scanf("%s", infix);

    while (infix[i] != '\0') {

        if (isalnum(infix[i])) {
            postfix[j++] = infix[i];
        }

        else if (infix[i] == '(') {
            push(infix[i]);
        }

        else if (infix[i] == ')') {
            if (isEmpty()) {
                printf("Error: Parentheses Mismatched\n");
                return 0;
            }
            while (stack[top] != '(')
                postfix[j++] = pop();
            pop(); 
        }

        else { 
            while (!isEmpty() && precedence(stack[top]) >= precedence(infix[i]))
                postfix[j++] = pop();
            push(infix[i]);
        }

        i++;
    }

    while (!isEmpty()) {
        if (stack[top] == '(') {
            printf("Error: Parentheses Mismatched\n");
            return 0;
        }
        postfix[j++] = pop();
    }

    postfix[j] = '\0';

    printf("Postfix Expression: %s\n", postfix);
    return 0;
}