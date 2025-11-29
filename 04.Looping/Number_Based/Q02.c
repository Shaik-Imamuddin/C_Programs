#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    while(n>0){
        int last=n%10;
        sum+=last;
        n/=10;
    }
    printf("%d",sum);
    return 0;
}