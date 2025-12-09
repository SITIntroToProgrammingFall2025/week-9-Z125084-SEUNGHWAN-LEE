#include <stdio.h>

int main() {
    const int SIZE = 5;
    int arr[5];
    int i, j, temp;

    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < SIZE - 1; i++) {
        int min_index = i;
        for (j = i + 1; j < SIZE; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        
        if (min_index != i) {
            temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
