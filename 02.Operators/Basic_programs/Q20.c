#include<stdio.h>
int main(){
    int marks;
    scanf("%d",&marks);
    printf("%s\n",(marks>=35) ? "Pass" : "Fail");
    return 0;
}