#include<stdio.h>

int Factorial(int n){
    int fact;
fact = 1 ;
for ( int i = 1 ; i <=n ; i++){ 
    fact = fact * i ;
}
return fact;
}

int main (){
int num ;
printf("Enter number \n:");
scanf("%d", &num);
int a = Factorial(num);
printf("%d",a);
return 0;
}