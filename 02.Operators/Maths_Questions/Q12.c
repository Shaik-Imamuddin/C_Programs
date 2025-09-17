#include<stdio.h>
int main(){
    float a,SurfArea,vol,per;
    scanf("%f",&a);
    SurfArea = 6*a*a;
    vol = a*a*a;
    per = 12*a;
    printf("Surface Area = %.2f\n",SurfArea);
    printf("Volume = %.2f\n",vol);
    printf("Perimeter = %.2f\n",per);
    return 0;
}

/*
Formula:
Surface Area = 6*a^2
Volume = a^3
Perimeter = 12*a
*/