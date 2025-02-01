/*
    *
   * *
  *   *
 *     *
*********

*/
   #include <stdio.h>

void printHollowPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows for the hollow pyramid: ");
    scanf("%d", &n); // Take user input for the number of rows
    printHollowPyramid(n); // Call the function with user-provided input
    return 0;
}


