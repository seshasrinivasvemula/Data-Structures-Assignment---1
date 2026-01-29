#include <stdio.h>
int main() {
    int arr[10];
    int n, i;
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);
    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nThe elements in the array are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}