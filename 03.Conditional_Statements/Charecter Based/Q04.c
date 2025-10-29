#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>='0' && ch<='9')
        printf("%c is Charecter Digit",ch);
    else
        printf("%c is Not a Charecter Digit",ch);
}