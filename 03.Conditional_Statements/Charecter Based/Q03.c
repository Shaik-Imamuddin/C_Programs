#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
        printf("%c is Alphabet",ch);
    else
        printf("%c is Not an Alphabet",ch);
}