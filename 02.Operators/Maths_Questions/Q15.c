#include<stdio.h>
#define PI 3.14159
int main(){
    float r,h,surfaceArea,volume;
    scanf("%f%f",&r,&h);
    surfaceArea = 2*PI*r*(h+r);
    volume = PI*r*r*h;
    printf("Surface Area = %.2f\n",surfaceArea);
    printf("Volume = %.2f\n",volume);
    return 0;
}

/*

Formula:
Surface Area = 2*PI*r*(h+r);
Volume = PI*r^2*h

*/