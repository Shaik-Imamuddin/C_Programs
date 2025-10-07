#include<stdio.h>
int main(){
    float basic,pf,ins,net;
    scanf("%f",&basic);
    pf = 0.08*basic;     //8% 
    ins = 0.05*basic;   //5%
    net = basic-(pf+ins);
    printf("Net Salary = %.2f\n",net);
    return 0;
}