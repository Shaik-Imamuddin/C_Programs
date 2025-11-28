#include<stdio.h>
int main(){
    int n,digit,result=0,place=1;
    scanf("%d",&n);
    while(n>0){
        digit=n%10;
        if(digit!=0){
            result=digit*place+result;
            place*=10;
        }
        n/=10;
    }
    printf("%d\n",result);
    return 0;
}