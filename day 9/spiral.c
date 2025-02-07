#include <stdio.h>

void printSpiral(int arr[][100], int row, int col) {
    int top = 0, bottom = row - 1, left = 0, right = col - 1;

    printf("Spiral order of the matrix:\n");
    
    while (top <= bottom && left <= right) {
        
        for (int i = left; i <= right; i++) {
            printf("%d ", arr[top][i]);
        }
        top++;

        
        for (int i = top; i <= bottom; i++) {
            printf("%d ", arr[i][right]);
        }
        right--;

            if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                printf("%d ", arr[bottom][i]);
            }
            bottom--;
        }


        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                printf("%d ", arr[i][left]);
            }
            left++;
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

    printSpiral(arr, row, col);

    return 0;
} 
