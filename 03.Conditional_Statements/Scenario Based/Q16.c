#include<stdio.h>
int main(){
    long long mobile;
    scanf("%lld",&mobile);

    if (mobile>=1000000000 && mobile<=9999999999)
        printf("Valid Number");
    else
        printf("Invalid Number");
    return 0;
}