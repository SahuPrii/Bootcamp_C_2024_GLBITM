#include <stdio.h>

void printUnion(int arr1[], int size1, int arr2[], int size2) {
    int i, j, found;
    
    // Print elements of arr1
    for(i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }

    // Check and add elements from arr2 that are not in arr1
    for(i = 0; i < size2; i++) {
        found = 0;
        for(j = 0; j < size1; j++) {
            if(arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }
        if(!found) {
            printf("%d ", arr2[i]);
        }
    }
    printf("\n");
}

void printIntersection(int arr1[], int size1, int arr2[], int size2) {
    int i, j;
    
    // Print only common elements between arr1 and arr2
    for(i = 0; i < size1; i++) {
        for(j = 0; j < size2; j++) {
            if(arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {4, 5, 6, 7, 8};
    
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    
    printf("Union of the arrays: ");
    printUnion(arr1, size1, arr2, size2);
    
    printf("Intersection of the arrays: ");
    printIntersection(arr1, size1, arr2, size2);
    
    return 0;
}
