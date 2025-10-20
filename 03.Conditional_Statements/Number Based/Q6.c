#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        printf("a is Maximum = %d",a);
    else if(b>c)
        printf("b is Maximum = %d",b);
    else
        printf("c is Maximum = %d",c);
    return 0;
}