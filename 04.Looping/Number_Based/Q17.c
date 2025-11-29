#include<stdio.h>
int main(){
    int n,sum = 0,temp;
    scanf("%d",&n);
    temp=n;
    while(temp>0) {
        sum+=temp%10;
        temp/=10;    
    }
    if(n%sum==0)
        printf("%d is a Harshad Number.", n);
    else
        printf("%d is not a Harshad Number.", n);
    return 0;
}

/*

A Harshad Number (or Niven Number) is an integer that is divisible 
by the sum of its digits.

Example:
18 -> 1+8 = 9 -> 18%9 == 0 -> Harshad Number
21 -> 2+1 = 3 -> 21%3 == 0 -> Harshad Number
19 -> 1+9 = 10 -> 19%10 != 0 -> Not a Harshad Number

*/