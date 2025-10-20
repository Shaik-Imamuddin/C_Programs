#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if((n%2==0)&&(n%5==0)&&(n%8!=0))
        printf("%d is Divisible by both 2 and 5 and not by 8",n);
    else
        printf("%d is not Divisible by Either 2 or 5 or 8",n);
    return 0;
}