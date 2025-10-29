#include<stdio.h>
#include<math.h>  
int main(){
    float x1,y1,x2,y2,dis;
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    dis = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    printf("Distance between (%.2f,%.2f) and (%.2f,%.2f) = %.2f\n",x1,y1,x2,y2,dis);
    return 0;
}