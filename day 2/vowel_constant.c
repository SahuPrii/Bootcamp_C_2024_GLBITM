#include<stdio.h>
int main(){
    char ch ;
    printf("Enter the character:\n");
    scanf("%c", &ch);
    if ((ch ))
        if (ch == 'a' || ch == 'e' || ch== 'i' || ch =='o' || ch == 'u'|| ch == 'A' || ch == 'E' || ch== 'I' || ch =='O' || ch == 'U' )
        {
    printf("CHARACTER is vowel %c" , ch);
        }
        else {
            printf("CHARACTER is consotant %c" , ch);
        }
        return 0;
}