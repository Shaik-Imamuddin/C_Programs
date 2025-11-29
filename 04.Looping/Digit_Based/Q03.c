#include<stdio.h>
int main(){
    int n,d;
    scanf("%d%d",&n,&d);
    while(n>0){
        if(n%10==d){
            printf("%d is present\n",d);
            return 0;
        }
        n/=10;
    }
    printf("%d is not present\n",d);
    return 0;
}