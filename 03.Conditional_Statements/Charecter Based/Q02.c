#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
        printf("%c is Uppercase Letter",ch);
    else if(ch>='a' && ch<='z')
        printf("%c is Lower Letter",ch);
    else if(ch>='0' && ch<='9')
        printf("%c is Digit",ch);
    else
        printf("%c is Special Symbol",ch);
}