#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c)
        printf("a is Minimum = %d",a);
    else if(b<c)
        printf("b is Minimum = %d",b);
    else
        printf("c is Minimum = %d",c);
    return 0;
}