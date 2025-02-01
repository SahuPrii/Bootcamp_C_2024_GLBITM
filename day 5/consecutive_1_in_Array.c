#include<stdio.h>
int Cons(int arr[10]){
    int count = 0 , max =0 ;
    for (int i =0 ; i<10 ; i++){
        if (arr[i]==1){
            count++;
            if (count>max){
                max = count;
            }
        }
        else{
            count =0;
        }
    }
    return max;
}


int main(){
    int arr[]= {1,0,0,1,1,0,1,0,1,0};
    int count = 0;
    count = Cons(arr);
    printf("%d", count);

}