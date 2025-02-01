#include<stdio.h>

int Sorted(int arr[], int n ){
    for (int i =0 ;i < n-1 ; i++){
        if (arr[i] > arr[i+1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n; 

    printf("Enter the number of element:");
    scanf("%d" , &n);

    int arr[n];

    printf("Enter %d elements :", n);
    for (int i =0;  i<n ; i++){
        scanf("%d" ,&arr[i]);
    }

    if(Sorted(arr , n)){
        printf("The array is sorted:\n");
    }
    else{
        printf("The array is not sorted :\n");
    }
    return 0;
}