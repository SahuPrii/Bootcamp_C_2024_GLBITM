#include<stdio.h>
int  main(){
    int a ,b,c ;
    printf("Enter three numbers :\n");
    scanf("%d %d %d" , &a ,&b, &c);
    if (a>b && a>c){
        printf("A is greatet %d", a);
    }
    else if (b>c){
        printf("B is greatest %d", b);
    }
    else {
        printf("c is greatest %d", c );
    }
    return 0;
}