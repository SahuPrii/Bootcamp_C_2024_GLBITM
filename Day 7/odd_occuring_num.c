#include <stdio.h>


int findOddOccurring(int arr[], int size) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        result ^= arr[i]; 
    }
    return result; 
}

int main() {
    int arr[] = {4, 3, 4, 4, 3, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int oddNum = findOddOccurring(arr, size);
    printf("The odd occurring number is: %d\n", oddNum);

    return 0;
}















