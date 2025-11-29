#include<stdio.h>
int main(){
    int a,b,res=0;
    scanf("%d%d",&a,&b);
    int pb = b>0?b:-b;
    int sign = (a<0 && b>0) || (a>0 && b<0) ? -1:1;
    for(int i=0;i<pb;i++){
        res+=a;
    }
    res*=sign;
    printf("%d",res);
    return 0;
}