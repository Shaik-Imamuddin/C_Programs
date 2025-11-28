#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int min=9;

    while(n>0){
        int digit=n%10;
        if (digit<min)
            min=digit;
        n/=10;
    }
    printf("Smallest digit: %d\n",min);
    return 0;
}