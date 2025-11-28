#include<stdio.h>
int main(){
    int n,digit;
    int SquareSum=0,CubesSum=0;
    scanf("%d",&n);
    while(n>0){
        digit=n%10;
        SquareSum+=digit*digit;
        CubesSum+=digit*digit*digit;
        n/=10;
    }
    printf("Sum of squares = %d\n",SquareSum);
    printf("Sum of cubes = %d\n",CubesSum);
    return 0;
}