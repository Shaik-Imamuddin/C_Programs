#include<stdio.h>
int main(){
    int n,EvenSum=0,OddSum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0)
            EvenSum+=i;
        else
            OddSum+=i;
    }
    printf("Even Sum = %d\n",EvenSum);
    printf("Odd Sum = %d",OddSum);
    return 0;
}