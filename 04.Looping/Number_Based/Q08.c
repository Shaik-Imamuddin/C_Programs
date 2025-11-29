#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int tempa=a,tempb=b;
    while (b!=0) {
        int temp=b;       // Euclidean algorithm
        b=a%b;
        a=temp;
    }
    printf("GCD of %d and %d is %d\n",tempa,tempb,a);
    return 0;
}