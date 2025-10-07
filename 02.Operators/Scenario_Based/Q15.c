#include<stdio.h>
int main(){
    int amt,n500,n200,n100;
    scanf("%d",&amt);
    n500 = amt/500;
    n200 = (amt-n500*500)/200;
    n100 = (amt-n500*500-n200*200)/100;
    printf("500 Notes = %d\n200 Notes = %d\n100 Notes = %d\n", n500, n200, n100);
    return 0;
}