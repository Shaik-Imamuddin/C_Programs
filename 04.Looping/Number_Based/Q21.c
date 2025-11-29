#include<stdio.h>
int main(){
    int n,temp;
    scanf("%d", &n);
    temp = n;
    if(n<=0){
        printf("%d is NOT a Power of 2.\n", n);
        return 0;
    }
    while(temp%2==0){
        temp = temp/2;
    }
    if(temp==1)
        printf("%d is a Power of 2.\n", n);
    else
        printf("%d is NOT a Power of 2.\n", n);
    return 0;
}