#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
        printf("The sides form a valid triangle.\n");
    else
        printf("The sides do not form a valid triangle.\n");
    return 0;
}