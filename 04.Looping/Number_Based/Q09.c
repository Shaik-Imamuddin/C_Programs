#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int tempa=a,tempb=b;
    while (b!=0) {
        int temp=b;       
        b=a%b;
        a=temp;
    }
    printf("LCM of %d and %d is %d\n",tempa,tempb,(a*b)/a);
    return 0;
}