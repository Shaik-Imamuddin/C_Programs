#include<stdio.h>
int main(){
    float cel,farn;
    scanf("%f",&cel);
    farn=(cel*9/5)+32;
    printf("Temperature in Fahrenheit = %.2f\n",farn);
    return 0;
}

// Formula: F=(C*9/5)+32