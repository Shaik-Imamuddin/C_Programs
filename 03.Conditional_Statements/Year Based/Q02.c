#include<stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    if (year%100==0)
        printf("%d is a Century Year",year);
    else
        printf("%d is NOT a Century Year",year);
    return 0;
}