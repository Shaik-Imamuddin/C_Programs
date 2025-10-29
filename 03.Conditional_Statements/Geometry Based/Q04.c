#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>0 && b>0 && c>0 && (a+b+c==180))
        printf("The angles form a valid triangle");
    else
        printf("The angles do not form a valid triangle");
    return 0;
}