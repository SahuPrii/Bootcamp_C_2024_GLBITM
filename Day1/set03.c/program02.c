/*
A
BA
CBA
DCBA
EDCBA
*/

#include<stdio.h>
int main(){
    int i ,j;
    char ch = 'A';
    for (i=1 ; i<=5; i++){   
        for (j=1 ; j<=i ; j++){
            printf("%c", ch);   
        }
        printf("\n");
    }
    return 0;
}