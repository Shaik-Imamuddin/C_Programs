#include<stdio.h>
int main(){
    int num,sum,temp;
    scanf("%d",&num);
    temp=num;
    while(temp>9){
        sum=0;
        while(temp>0) {
            sum+=temp%10;
            temp/=10;
        }
        temp=sum;
    }
    if(temp==1)
        printf("%d is a Magic Number.\n", num);
    else
        printf("%d is NOT a Magic Number.\n", num);
    return 0;
}

/*
A number is called a Magic Number if the sum of its digits, repeatedly calculated until a single digit, is 1.

Steps:
Add all digits of the number.
If the result has more than 1 digit, repeat step 1.
If the final single digit is 1, the number is a Magic Number.

Examples:
19 -> 1+9 = 10 -> 1+0 = 1 -> Magic Number
123 -> 1+2+3 = 6 -> Not Magic
*/