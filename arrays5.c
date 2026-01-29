#include <stdio.h>
int main() {
    int arr[10];
    int i, n, pos, x;
    printf("Input the number of elements in the array: ");
    scanf("%d", &n);
    printf("Input %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Input the element to be inserted: ");
    scanf("%d", &x);
    printf("Input the position where the element is to be inserted: ");
    scanf("%d", &pos);
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = x;
    n++; 
    printf("\nAfter insertion, the array is: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}