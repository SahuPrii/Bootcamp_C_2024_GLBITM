#include <stdio.h>


int isPowerOfTwo(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPowerOfTwo(num))
        printf("%d is a power of two.\n", num);
    else
        printf("%d is NOT a power of two.\n", num);

    return 0;
}