#include<stdio.h>
int power(int n){
    int temp =1;
    for (int i =1 ; i<=n ; i++)
    {
        temp = temp * 2;
    }
    return temp;
}

int main(){
    int n , a;
    printf("Enter the powerof 2:\n");
    scanf("%d", &n);
    a = power(n);
    printf("%d", a);
    return 0;
}