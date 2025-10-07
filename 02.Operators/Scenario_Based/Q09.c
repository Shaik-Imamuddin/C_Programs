#include <stdio.h>
int main() {
    float p,t,r;
    scanf("%f",&p);
    scanf("%f",&t);//Months
    scanf("%f",&r);
    printf("Simple Interest = %.2f\n",(p*t*r)/100);
    return 0;
}