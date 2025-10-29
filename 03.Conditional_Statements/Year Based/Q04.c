#include<stdio.h>
int main(){
    int year1,year2;
    scanf("%d%d",&year1,&year2);
    if(year1%10 == year2%10)
        printf("Both years have the SAME last digit");
    else
        printf("Both years have the DIFFERENT last digit");
    return 0;
}