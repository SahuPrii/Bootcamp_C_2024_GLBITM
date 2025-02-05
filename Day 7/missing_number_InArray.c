#include <stdio.h>

int findMissingNumber(int arr[], int n) {
    int xor1 = 0, xor2 = 0;
    
    // XOR of all array elements
    for (int i = 0; i < n - 1; i++) {
        xor1 ^= arr[i];
    }
    
    // XOR of all numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        xor2 ^= i;
    }
    
    
    return xor1 ^ xor2;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6}; 
    int n = sizeof(arr) / sizeof(arr[0]) + 1;
    
    int missingNumber = findMissingNumber(arr, n);
    printf("The missing number is: %d\n", missingNumber);
    
    return 0;
}
