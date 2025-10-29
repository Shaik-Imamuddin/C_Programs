#include<stdio.h>
int main(){
    int u;
    float bill=0;
    scanf("%d",&u);
    
    if(u<=100)
        bill=0;
    else if(u<=300)
        bill=(u-100)*5;
    else
        bill=(200*5)+(u-300)*10;
    if(u>500)
        bill += bill*0.10; 

    printf("Total Bill: %.2f",bill);
    return 0;
}