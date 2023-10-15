#include <stdio.h>
void swap(int array[], int i, int j) {
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}
int partition(int array[], int left, int right) {
    int pivot = array[left];
    while (left != right) {
        while (left < right && array[right] > pivot)
            right--;
        if (left < right) {
            swap(array, left, right);
            left++;
        }
        while (left < right && array[left] <= pivot)
            left++;
        if (left < right) {
            swap(array, left, right);
            right--;
        }
    }
    return left;
}
void quicksort(int array[], int left, int right) {
    if (left < right) {
        int pivot = partition(array, left, right);
        quicksort(array, left, pivot - 1);
        quicksort(array, pivot + 1, right);
    }
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    quicksort(array, 0, n - 1);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
