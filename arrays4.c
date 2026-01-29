#include <stdio.h>
int main() {
    int n, i, j, k;
    int arr[10];
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nThe unique elements found in the array are: \n");
    for (i = 0; i < n; i++) {
        int count = 0;
        for (j = 0; j < n; j++) {
            if (i != j) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }
        }
        if (count == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}