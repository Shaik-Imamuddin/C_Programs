#include<stdio.h>
int main(){
    long long n;
    scanf("%lld",&n);
    int c1=0,c0=0;
    while(n>0){
        int last=n%10;
        if(last==1)
            c1++;
        else if(last==0)
            c0++;
        n/=10;
    }
    printf("1s: %d\n0s: %d\n",c1,c0);
    return 0;
}