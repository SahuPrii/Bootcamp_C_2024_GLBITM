#include <stdio.h>

int snake(int arr[3][3], int row, int col) {
    for (int i = 0; i < row; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < col; j++) {
                printf("%d ", arr[i][j]);
            }
        } else {
            for (int j = col - 1; j >= 0; j--) {
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}

int main() {
    int row = 3, col = 3, arr[3][3];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Matrix in snake pattern:\n");
    snake(arr, row, col);

    return 0;
}
