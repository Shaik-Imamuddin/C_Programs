#include<stdio.h>
int main(){
    float amt,dis=0;
    scanf("%f",&amt);

    if (amt>=5000)
        dis = amt*0.20;
    else if (amt>=3000)
        dis = amt*0.15;
    else if (amt>=1000)
        dis = amt*0.10;
    else
        dis = amt*0.05;

    printf("Original Amount: %.2f\n",amt);
    printf("Discount: %.2f\n",dis);
    printf("Final Amount: %.2f\n",amt-dis);
    return 0;
}