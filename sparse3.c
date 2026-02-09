#include <stdio.h>

int main() {
    int poly1[20][2], poly2[20][2], result[40][2];
    int n, m, i = 0, j = 0, k = 0;

    printf("Enter number of terms in first polynomial: ");
    scanf("%d", &n);
    printf("Enter terms of first polynomial (coefficient exponent):\n");
    for (i = 0; i < n; i++) scanf("%d %d", &poly1[i][0], &poly1[i][1]);

    printf("Enter number of terms in second polynomial: ");
    scanf("%d", &m);
    printf("Enter terms of second polynomial (coefficient exponent):\n");
    for (j = 0; j < m; j++) scanf("%d %d", &poly2[j][0], &poly2[j][1]);

    i = 0; j = 0;
    while (i < n && j < m) {
        if (poly1[i][1] > poly2[j][1]) {
            result[k][0] = poly1[i][0];
            result[k][1] = poly1[i][1];
            i++; k++;
        } else if (poly1[i][1] < poly2[j][1]) {
            result[k][0] = poly2[j][0];
            result[k][1] = poly2[j][1];
            j++; k++;
        } else {
            result[k][0] = poly1[i][0] + poly2[j][0];
            result[k][1] = poly1[i][1];
            i++; j++; k++;
        }
    }
    while (i < n) {
        result[k][0] = poly1[i][0];
        result[k][1] = poly1[i][1];
        i++; k++;
    }
    while (j < m) {
        result[k][0] = poly2[j][0];
        result[k][1] = poly2[j][1];
        j++; k++;
    }

    printf("\nResultant Polynomial after Addition: ");
    for (int x = 0; x < k; x++) {
        printf("%dx^%d ", result[x][0], result[x][1]);
        if (x < k - 1) printf("+ ");
    }
    printf("\n");
    return 0;
}