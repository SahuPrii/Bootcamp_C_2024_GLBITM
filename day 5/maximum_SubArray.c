#include<stdio.h>
int MaxSub(int arr[5]){
    int  max =0 ,sum ;
    for (int i =0 ; i<5 ; i++){
        sum = 0;
        for(int j=1 ; j<=5; j++ )
        {
         sum = sum + arr[j];
         if(sum > max){
            max = sum ;
         }
        }
    }
    return max;
}


int main(){
    int arr[5]= {5,4,-2,-5,5};
    int count = 0;
    count = MaxSub(arr);
    printf("%d", count);

}