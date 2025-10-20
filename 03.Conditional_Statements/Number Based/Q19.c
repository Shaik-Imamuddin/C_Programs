#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if((a*b)>0)
        printf("%d is Positive",a*b);
    else
        printf("%d is Negative",a*b);
    return 0;
}