#include <stdio.h>
int main() {
    int arr1[10], arr2[10], merged[10];
    int s1, s2, i, k;
    printf("Input the number of elements in the first array: ");
    scanf("%d", &s1);
    printf("Input %d elements in the first array:\n", s1);
    for (i = 0; i < s1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Input the number of elements in the second array: ");
    scanf("%d", &s2);
    printf("Input %d elements in the second array:\n", s2);
    for (i = 0; i < s2; i++) {
        scanf("%d", &arr2[i]);
    }
    for (i = 0; i < s1; i++) {
        merged[i] = arr1[i];
    }
    for (i = 0; i < s2; i++) {
        merged[s1 + i] = arr2[i];
    }
    printf("\nThe merged array is: \n");
    for (i = 0; i < s1 + s2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}