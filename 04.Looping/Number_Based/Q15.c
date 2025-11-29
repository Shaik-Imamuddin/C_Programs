#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n/2;i++){
        if (n%i==0){
            sum+=i;
        }
    }
    if(sum==n && n>0)
        printf("%d is a Perfect Number\n",n);
    else
        printf("%d is Not a Perfect Number\n",n);
    return 0;
}
/*

A Perfect Number is a positive integer that is equal to the sum of its proper divisors (excluding itself).

6-> 1 , 2 , 3 , 6 -> except 6 ->1+2+3 = 6.

if n and sum are same perfect number else not a perfect number.

*/