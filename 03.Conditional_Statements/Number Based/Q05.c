#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>=100 && n<=999)
        printf("%d is 3 Digit Number",n);
    else
        printf("%d is not a 3 Digit Number",n);
    return 0;
}