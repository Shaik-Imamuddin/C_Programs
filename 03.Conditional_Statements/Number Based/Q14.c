#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if((n%3==0)&&(n%5==0))
        printf("%d is Divisible by Both 3 and 5",n);
    else
        printf("%d is not Divisible by Both 3 and 5",n);
    return 0;
}