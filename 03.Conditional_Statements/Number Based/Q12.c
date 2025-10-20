#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if((n%10)%2==0)
        printf("%d is Even",n%10);
    else
        printf("%d is Odd",n%10);
    return 0;
}