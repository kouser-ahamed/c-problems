#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int sourceArray[n];
    int destinationArray[n];

    printf("Enter %d elements for the source array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &sourceArray[i]);
    }

    // Copying elements from sourceArray to destinationArray
    for (int i = 0; i < n; i++) {
        destinationArray[i] = sourceArray[i];
    }

    printf("Elements copied from source array to destination array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", destinationArray[i]);
    }

    return 0;
}
