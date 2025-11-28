#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n>10){
        n/=10;
    }
    if(n%2==0)
        printf("%d is Even",n);
    else
        printf("%d is Odd",n);
    return 0;
}