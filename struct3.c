#include <stdio.h>
struct Complex {
    float real;
    float imag;
};
int main() {
    struct Complex n1, n2, sum, prod;
    printf("Enter real and imaginary parts of first number: ");
    scanf("%f %f", &n1.real, &n1.imag);
    printf("Enter real and imaginary parts of second number: ");
    scanf("%f %f", &n2.real, &n2.imag);
    sum.real = n1.real + n2.real;
    sum.imag = n1.imag + n2.imag;
    prod.real = (n1.real * n2.real) - (n1.imag * n2.imag);
    prod.imag = (n1.real * n2.imag) + (n1.imag * n2.real);
    printf("\nSum: %.2f + %.2fi", sum.real, sum.imag);
    printf("\nProduct: %.2f + %.2fi\n", prod.real, prod.imag);
    return 0;
}