#include<stdio.h>
int main(){
    int n,m,res=1;
    scanf("%d%d",&n,&m);
    if(m<0){
        printf("You Entered Negative Exponent");
        return 0;
    }
    for (int i=0;i<m;i++){
        res*=n;
    }
    printf("%d",res);
    return 0;
}