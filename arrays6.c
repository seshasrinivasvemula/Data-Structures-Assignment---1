#include <stdio.h>
int main() {
    int arr[100];
    int i, n, index;
    printf("Input the size of array: ");
    scanf("%d", &n);
    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Input the index (0 to %d) of the element you want to delete: ", n - 1);
    scanf("%d", &index);
    if (index < 0 || index >= n) {
        printf("Invalid index!\n");
    } else {
        for (i = index; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; 
        printf("\nThe new array is: \n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}