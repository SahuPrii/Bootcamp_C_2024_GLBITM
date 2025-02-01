/*
        A
      A B A 
    A B C B A
  A B C D C B A
A B C D E D C B A  

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
        char ch = 'A';
        for (j= 1; j<= i  ; j++){
            printf("%c", ch++);
    }
        printf("\n");
    }
    ch = ch - 2;
    for(j=i-1; j>=1; j--){
     printf("%d", j);
    }
    return 0;
    }