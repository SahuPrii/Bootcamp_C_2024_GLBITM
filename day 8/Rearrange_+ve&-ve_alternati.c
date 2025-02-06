#include <stdio.h>

void rearrangeArray(int* nums, int numsSize, int* result) {
    int pos[numsSize / 2], neg[numsSize / 2]; 
    int posIndex = 0, negIndex = 0;

    // Separate positive and negative numbers
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > 0)
            pos[posIndex++] = nums[i];
        else
            neg[negIndex++] = nums[i];
    }

    // Merge pos and neg arrays in alternating order
    posIndex = 0, negIndex = 0;
    for (int i = 0; i < numsSize; i += 2) {
        result[i] = pos[posIndex++];
        result[i + 1] = neg[negIndex++];
    }
}

int main() {
    int nums[] = {3, 1, -2, -5, 2, -4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int result[numsSize];

    rearrangeArray(nums, numsSize, result);

    
    for (int i = 0; i < numsSize; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}
