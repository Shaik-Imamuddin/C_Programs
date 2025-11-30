#include<stdio.h>
int main(){
    char c1,c2;
    scanf("%c %c",&c1,&c2);
    for(char i=c1;i<=c2;i++){
        printf("%c ",i);
    }
    return 0;
}