#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if((int)ch%2==0)
        printf("The ASCII value of %c-%d is Even.\n",ch,(int)ch);
    else
        printf("The ASCII value of %c-%d is Odd.\n",ch,(int)ch);
    return 0;
}