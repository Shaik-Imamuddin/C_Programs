#include<stdio.h>
int main(){
    int num,temp,rem,sum=0;
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
        rem=temp%10;
        int fact = 1;
        for (int i = 1; i <= rem; i++) {
            fact *= i;
        }
        sum+=fact;
        temp/=10;
    }
    if(sum==num)
        printf("%d is a Strong Number\n",num);
    else
        printf("%d is Not a Strong Number\n",num);
    return 0;
}
/*

inp -> 145 -> 1!+4!+5! = 145 

input and sum of factorial of each digit

if both are same strong number else not a strong number.

*/