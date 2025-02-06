#include <stdio.h>

int main() {
    int arr[] = {1, 2, 5 , 8, 6, 5}; 
    int arrsize = 6;
    int peak = -1;    

    for (int i = 0; i < arrsize; i++) {
        if ((i == 0 || arr[i] > arr[i-1]) && (i == arrsize-1 || arr[i] > arr[i+1])) {
            peak = arr[i]; 
            break; 
        }
    }

    if (peak != -1) {
        printf("The first peak element in the array is: %d\n", peak);
    } else {
        printf("No peak element found in the array.\n");
    }

    return 0;
}
