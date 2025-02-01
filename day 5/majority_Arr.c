#include<stdio.h>
int Cons(int arr[10]){
    int count = 0 , max =0 ;
    for (int i =0 ; i<10 ; i++){
        count = 0;
        for (int j = i ; j < 10 ; j++ ){
            if (arr[i] == arr[j]){
        count ++ ;
        max = arr[i];
         }
        }
        if (count >= 10/2 );{
            return max;
        }
       
        }
    return -1;
}


int main(){
    int arr[]= {2,8,7,4,5,2,2,6,2,2};
    int count = 0;
    count = Cons(arr);
    printf("%d", count);

}