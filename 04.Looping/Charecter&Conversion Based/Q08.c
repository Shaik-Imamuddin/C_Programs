#include<stdio.h>
int main(){
    int n,place=1;
    scanf("%d",&n);
    long long binary=0;
    while(n>0){
        int rem=n%2;
        binary = rem*place+ binary;
        place*=10;
        n/=2;
    }
    printf("%lld",binary);
    return 0;
}
