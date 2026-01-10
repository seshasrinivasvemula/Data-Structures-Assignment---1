#include <stdio.h>
void add(float a, float b) {
     printf("Sum: %.2f", a + b); 
    }
void sub(float a, float b) {
     printf("Diff: %.2f", a - b); 
    }
void mul(float a, float b) { 
    printf("Prod: %.2f", a * b); 
}
void div(float a, float b) { 
    (b != 0) ? printf("Quot: %.2f", a / b) : printf("Error");
 }

int main() {
    int choice;
    float x, y;
    printf("1.Add 2.Sub 3.Mul 4.Div\nChoice: ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);
    switch(choice) {
        case 1: add(x, y); break;
        case 2: sub(x, y); break;
        case 3: mul(x, y); break;
        case 4: div(x, y); break;
        default: printf("Invalid");
    }
 return 0;
}