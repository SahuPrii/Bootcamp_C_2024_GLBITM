#include<stdio.h>
int power(int n){
    if (n==0){
        return 1;
    }
    else if (n==1){
        return 2;
    }
    else {
        return 2*power(n-1);
    }
}

int main(){
    int n , a;
    printf("Enter the powerof 2:\n");
    scanf("%d", &n);
    a = power(n);
    printf("%d", a);
    return 0;
}