#include<stdio.h>
#include<math.h>
int main(){
    int num,orgnum,rem,count=0;
    float res=0;
    scanf("%d",&num);

    orgnum = num;

    int temp = num;
    while(temp!=0){
        temp/=10;
        count++;
    }
    temp = num;
    while(temp!=0){
        rem = temp%10;
        res+=pow(rem,count);
        temp/=10;
    }
    if((int)res==orgnum)
        printf("%d is Armstrong Number",orgnum);
    else
        printf("%d is Not Armstrong Number",orgnum);
}

/*

inp -> 153 -> no.of digits -> 3

1^3 + 5^3 + 3^3 = 153 

if both are same armstrong else not an armstrong

*/