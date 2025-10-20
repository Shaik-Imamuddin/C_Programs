#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a%10==b%10)
        printf("Same last Digit for both the values %d and %d",a%10,b%10);
    else
        printf("Different last Digit for both the values %d and %d",a%10,b%10);
    return 0;
}