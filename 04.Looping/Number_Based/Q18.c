#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num%7==0 || num%10==7)
        printf("%d is a Buzz Number", num);
    else
        printf("%d is NOT a Buzz Number.\n", num);
    return 0;
}

/*
A number is called a Buzz Number if:
It is divisible by 7, or
It ends with 7 (last digit is 7)
*/