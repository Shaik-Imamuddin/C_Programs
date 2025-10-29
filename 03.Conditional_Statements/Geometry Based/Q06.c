#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if (a==b && b==c && c==d)
        printf("Forms a Square");
    else if (a==c && b==d)
        printf("Forms a Rectangle");
    else
        printf("Neither Forms Square nor Rectangle");
    return 0;
}