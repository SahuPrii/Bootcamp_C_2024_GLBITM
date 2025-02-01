#include<stdio.h>
int fib(int n)
{
    if (n == 0)
    return 0;
    else if (n == 1)
        return 1;
        else {
            return (fib(n-1)+ fib (n-2));
        }
    }
int main(){
int n;
int arr[100];
printf("Enter a number:");
scanf("%d",&n);

printf("Fibonacii Series");
for (int i =0; i<n ;i++){

    arr[i+1] = fib(i);
    printf("%d", fib(i));
}
printf("\n Nth term = %d", arr[n]);

return 0;
}