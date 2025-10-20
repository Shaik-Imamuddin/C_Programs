#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>=0 && n<=9)
        printf("%d is Single Digit Number",n);
    else if(n>=10 && n<=99)
        printf("%d is Two Digit Number",n);
    else if(n>=100 && n<=999)
        printf("%d is Three Digit Number",n);
    else
        printf("%d is More than Three Digit Number",n);
    return 0;
}