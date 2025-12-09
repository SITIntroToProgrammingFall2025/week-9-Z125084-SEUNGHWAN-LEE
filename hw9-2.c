#include <stdio.h>

int main() {
    const int SIZE = 3;
    int arr[3][3];
    int flipped_arr[3][3];
    int i, j;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            flipped_arr[i][j] = arr[i][SIZE - 1 - j];
        }
    }

    printf("You entered\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d", arr[i][j]);
            if (j < SIZE - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("Output\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d", flipped_arr[i][j]);
            if (j < SIZE - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
