#include<stdio.h>
int  main(){
    int num ,n ,rev=0, rem ;
    printf("Enter a number:\n");
    scanf("%d",&num);
    n = num;
    while(num !=0){
        rem = num % 10;
        rev = rev *10 + rem;
        num= num/10;
    }
    if (rev == n ){
    printf("The number is Palindrome %d", n);
    }
    else{
        printf("The number is Palindrome %d", n);
    }
    return 0;
}
