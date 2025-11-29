#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    int sq;
    sq=n*n;
    int temp=n;
    while(temp!=0){
        count++;
        temp/=10;
    }
    int pow=1;
    for (int i = 0; i < count; i++)
        pow *= 10;
    if(sq%pow==n)
        printf("%d is an Automorphic Number",n);
    else
        printf("%d is NOT an Automorphic Number",n);
    return 0;
}

/*
5 -> 5² = 25 -> ends with 5 -> Automorphic
6 -> 6² = 36 -> ends with 6 -> Automorphic
76 -> 76² = 5776 -> ends with 76 -> Automorphic
*/