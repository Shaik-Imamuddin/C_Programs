#include<stdio.h>
int main(){
    int bal=5000,wtdr;
    scanf("%d",&wtdr);

    if (wtdr>bal)
        printf("Insufficient Balance!\n");
    else if (wtdr%100 != 0)
        printf("Amount must be multiple of 100!\n");
    else {
        bal-=wtdr;
        printf("Withdrawal Successful! Remaining Balance: %d\n", bal);
    }
    return 0;
}