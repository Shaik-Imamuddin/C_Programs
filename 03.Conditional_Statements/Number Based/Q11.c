#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if((n/100)%2==0)
        printf("%d is Even",n/100);
    else
        printf("%d is Odd",n/100);
    return 0;
}