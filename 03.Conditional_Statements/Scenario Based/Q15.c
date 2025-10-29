#include<stdio.h>
int main(){
    int speed;
    scanf("%d",&speed);
    if (speed>100)
        printf("Over-speeding");
    else
        printf("Speed is within limit");
    return 0;
}