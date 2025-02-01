#include<stdio.h>
int  main(){
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    if (num > 1){
        printf("The number is positive %d", num);
    }
    else if (num < 1){
        printf("The number is Negative %d", num);
    }
    else{
        printf("The number is Zero %d", num);
    }
    return 0;

}