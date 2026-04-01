#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[10];

    // Input array elements
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int X;
    scanf("%d", &X);

    int low = 0, high = N - 1;
    int found = -1;

    // Binary Search
    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == X) {
            found = mid;
            break;
        } else if(arr[mid] < X) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // Output result
    if(found != -1) {
        printf("The target value %d is present at index %d", X, found);
    } else {
        printf("The target value %d is not present in the array", X);
    }

    return 0;
}