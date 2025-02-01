/*
    1
   121
  12321
 1234321
123454321
*/

#include<stdio.h>
int main(){
    int i ,j,n;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i=1 ; i<=n; i++){ //for rows

        for ( j = 1 ; j<=n-i; j++) // for space
        {
            printf(" ");
        }
        for (j= 1; j<= i  ; j++){
            printf("%d", j);
    }
        printf("\n");
    }
    for(j=i-1; j>=1; j--){
     printf("%d", j);
    }
    return 0;
    }