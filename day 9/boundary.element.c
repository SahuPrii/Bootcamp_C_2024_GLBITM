#include <stdio.h>

void printBoundaryElements(int arr[][100], int row, int col) {
    printf("Boundary elements of the matrix:\n");
    

    for (int i = 0; i < col; i++) {
        printf("%d ", arr[0][i]);
    }
    

    for (int i = 1; i < row - 1; i++) {
        printf("%d ", arr[i][col - 1]);
    }
    
    
    if (row > 1) {
        for (int i = col - 1; i >= 0; i--) {
            printf("%d ", arr[row - 1][i]);
        }
    }
    
    
    if (col > 1) {
        for (int i = row - 2; i > 0; i--) {
            printf("%d ", arr[i][0]);
        }
    }

    printf("\n");
}

int main() {
    int row, col;
    int arr[100][100];  

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printBoundaryElements(arr, row, col);

    return 0;
}
