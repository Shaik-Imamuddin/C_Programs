#include <stdio.h>
int main() {
    int time,speed;
    scanf("%d",&time);//hrs
    scanf("%d",&speed);//km/hr
    printf("Distance travelled = %d km\n",time*speed);
    return 0;
}