#include<stdio.h>
int main(){
    int n,digit;
    int evenSum=0,oddSum=0;
    scanf("%d",&n);

    while(n>0){
        digit=n%10;
        if(digit%2==0)
            evenSum+=digit;
        else
            oddSum+=digit;
        n/=10;
    }
    int diff=evenSum-oddSum;
    printf("Difference = %d\n",diff);
    return 0;
}