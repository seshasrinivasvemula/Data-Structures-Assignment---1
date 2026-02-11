#include <stdio.h>
#include <ctype.h>

int stack[100], top = -1;

void push(int x) { stack[++top] = x; }
int pop() { return stack[top--]; }

int main() {
    char exp[100];
    printf("Enter postfix: ");
    scanf("%s", exp);
    for (int i = 0; exp[i]; i++) {
        if (isdigit(exp[i])) push(exp[i] - '0');
        else {
            int v2 = pop();
            int v1 = pop();
            switch (exp[i]) {
                case '+': push(v1 + v2); break;
                case '-': push(v1 - v2); break;
                case '*': push(v1 * v2); break;
                case '/': push(v1 / v2); break;
            }
        }
    }
    printf("Result: %d\n", pop());
    return 0;
}