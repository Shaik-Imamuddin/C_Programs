#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if((n%10)%3==0)
        printf("Last digit of %d is divisible by 3",n);
    else
        printf("Last digit of %d is not divisible by 3",n);
    return 0;
}