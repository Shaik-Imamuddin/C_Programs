#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int even=0,odd=0;
    while(n>0){
        int digit=n%10;
        if (digit%2==0)
            even++;
        else
            odd++;
        n/=10;
    }
    if(even>0 && odd==0)
        printf("All digits are even\n");
    else if(odd>0 && even==0)
        printf("All digits are odd\n");
    else
        printf("Digits are mixed\n");
    return 0;
}