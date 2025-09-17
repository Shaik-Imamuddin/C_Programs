#include<stdio.h>
int main(){
    float f,c;
    scanf("%f",&f);
    c = (f-32)*5/9;
    printf("Temperature in Celsius = %.2f\n", c);
    return 0;
}

// Formula:(F-32)*5/9