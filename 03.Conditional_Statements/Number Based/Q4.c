#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if((a-b)%2==0)
        printf("%d is Even",a-b);
    else
        printf("%d is Odd",a-b);
    return 0;
}