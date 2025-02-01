#include<stdio.h>
int  main(){
    int year;
    printf("Enter a year:\n");
    scanf("%d",&year);
    if ( year %4 == 0 && year % 400 ==0  || year % 100 !=0)
    {
        printf("The number is Leap year %d" , year);
    }
    else {
         printf("The number is not a  Leap year %d" , year);
    }
    return 0;
}
