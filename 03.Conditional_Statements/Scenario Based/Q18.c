#include<stdio.h>
int main(){
    int l;
    float bill=0;
    scanf("%d",&l);

    if (l<=1000)
        bill = 0;
    else if (l<=3000)
        bill = (l-1000)*1.0;
    else
        bill = (2000*1.0) + ((l-3000)*2.0);

    printf("Total Water Bill: Rs.%.2f\n", bill);
    return 0;
}