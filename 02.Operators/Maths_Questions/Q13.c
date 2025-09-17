#include<stdio.h>
int main(){
    float l,b,h,SurfArea,vol;
    scanf("%f%f%f",&l,&b,&h);
    SurfArea = 2*(l*b+b*h+h*l);
    vol = l*b*h;
    printf("Surface Area = %.2f\n",SurfArea);
    printf("Volume = %.2f\n",vol);
    return 0;
}
/*

Formula:
Surface Area = 2*(length*breadth+breadth*height+height*length);
Volume = length*breadth*height
*/