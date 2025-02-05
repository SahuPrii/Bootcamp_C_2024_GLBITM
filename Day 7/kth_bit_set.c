/*
#include<stdio.h>
int main(){
int data = 5 ; 
int k;
printf("Enter k bit: ");
scanf("%d", &k);
int mask = 1<<k;
if (data & mask ){
    printf("Clear bit ");
 }
    else{
       printf("Set bit ");
    }
    return 0 ;
}
*/

#include<stdio.h>
int FindBit(int n, int bit){
    int a=1;
    a=a<<bit;
     if (n & a) {
        return 1;
    }
    else{
        return 0;
    }
    return 0;
}
int main(){
    int n,r,bit;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Enter bit: ");
    scanf("%d",&bit);
    printf("%d",FindBit(n,bit));
}