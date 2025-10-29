#include<stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    if(year/100 == year%100)
        printf("First and last two digits are EQUAL");
    else
        printf("First and last two digits are NOT equal");
    return 0;
}