#include<stdio.h>
#define PI 3.14159
int main(){
    float r,SurfArea,vol;
    scanf("%f",&r);
    SurfArea = 4*PI*r*r;
    vol = (4.0/3)*PI*r*r*r;
    printf("Surface Area = %.2f\n",SurfArea);
    printf("Volume = %.2f\n", vol);
    return 0;
}

/*
Formula:
Surface Area = 4*PI*r^2
Volume = (4.0/3)*PI*r^3
*/