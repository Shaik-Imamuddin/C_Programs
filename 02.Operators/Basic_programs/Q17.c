#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("%s\n",(n>0 && (n&(n-1)) == 0)?"True":"False");
    return 0;
}