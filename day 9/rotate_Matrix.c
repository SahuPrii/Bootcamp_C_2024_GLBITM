#include <stdio.h>

#define N 3  


void printMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void rotateMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = i ; j < N; j++) {
            
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // now we will reverse
    int k ;
     for (int i = 0; i < N; i++) {
      for (int j = 0 ; j < N-1,  j < k ; j++, k--) {
            
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][k];
            matrix[i][k] = temp;
        }
    }
}

int main() {
    int matrix[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Original Matrix:\n");
    printMatrix(matrix);


    rotateMatrix(matrix);

    printf("\nRotates Matrix by 90 degrees clockwise:\n");
    printMatrix(matrix);

    return 0;
}