#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4};
    int arrsize = 4;
    int prod;
    int ans[arrsize]; 

    for (int i = 0; i < arrsize; i++) {
        prod = 1; 

        for (int j = 0; j < arrsize; j++) {
            if (i != j) { 
                prod = prod * arr[j];
            }
        }

        ans[i] = prod; 
    }

   
    for (int i = 0; i < arrsize; i++) {
        printf("%d ", ans[i]);
    }

    return 0;
}


/* 2 approach 



*/