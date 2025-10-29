#include<stdio.h>
int main(){
    int c,cl;//capacity in liters , current level of water
    float p;
    scanf("%d",&c);
    scanf("%d",&cl);

    p=(cl*100.0)/c;

    if(p>=80)
        printf("%.2f%% of Tank is filled\n",p);
    else if(p>=40)
        printf("%.2f%% of Tank is filled\n",p);
    else
        printf("%.2f%% of Tank is filled\n",p);
    return 0;
}