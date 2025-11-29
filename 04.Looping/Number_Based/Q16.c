#include<stdio.h>
int main(){
    int n,sq,sum=0;
    scanf("%d",&n);
    sq =n*n;   
    int temp=sq;
    while (temp>0) {
        sum+=temp%10;   
        temp/=10;         
    }
    if(sum==n)
        printf("%d is a Neon Number\n", n);
    else
        printf("%d is Not a Neon Number\n", n);
    return 0;
}

/*

A Neon Number is a number where the sum of the digits 
of its square is equal to the original number.

Example: 
9 -> 9² = 81 -> 8 + 1 = 9 -> Neon Number
7 -> 7² = 49 -> 4 + 9 = 13 -> Not a Neon Number

If n and the sum of digits of n² are the same → Neon Number
Else Not a Neon Number.
*/
