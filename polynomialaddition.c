#include <stdio.h>
typedef struct {
    float coeff;
    int exp;
} Term;
int addPolynomials(Term p1[], int n1, Term p2[], int n2, Term result[]) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (p1[i].exp > p2[j].exp) {
            result[k++] = p1[i++];
        } else if (p1[i].exp < p2[j].exp) {
            result[k++] = p2[j++];
        } else {
            float sumCoeff = p1[i].coeff + p2[j].coeff;
            if (sumCoeff != 0) {
                result[k].coeff = sumCoeff;
                result[k].exp = p1[i].exp;
                k++;
            }
            i++;
            j++;
        }
    }
    while (i < n1) result[k++] = p1[i++];
    while (j < n2) result[k++] = p2[j++];
    return k; 
}
void printPolynomial(Term p[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%.2fx^%d", p[i].coeff, p[i].exp);
        if (i < n - 1) printf(" + ");
    }
    printf("\n");
}
int main() {
    Term regionA[10], regionB[10], totalRegion[20];
    int n1, n2, n3;
    printf("Enter number of terms for Region A: ");
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++) {
        printf("Enter coeff and exp for term %d: ", i + 1);
        scanf("%f %d", &regionA[i].coeff, &regionA[i].exp);
    }
    printf("Enter number of terms for Region B: ");
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++) {
        printf("Enter coeff and exp for term %d: ", i + 1);
        scanf("%f %d", &regionB[i].coeff, &regionB[i].exp);
    }
    n3 = addPolynomials(regionA, n1, regionB, n2, totalRegion);
    printf("\nCombined Power Consumption Pattern:\n");
    printPolynomial(totalRegion, n3);
    return 0;
}