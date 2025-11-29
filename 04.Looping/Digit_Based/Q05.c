#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int prev=10;
    while(n>0){
        int digit=n%10;
        if (digit>prev) {
            printf("Digits are not in ascending order\n");
            return 0;
        }
        prev=digit;
        n/=10;
    }
    printf("Digits are in ascending order\n");
    return 0;
}