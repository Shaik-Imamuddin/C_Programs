#include<stdio.h>
int main(){
    int a,b;
    char op;
    scanf("%d%d",&a,&b);
    scanf(" %c",&op);
    switch(op){
        case '+': printf("Result = %d",a+b);break;
        case '-': printf("Result = %d",a-b);break;
        case '*': printf("Result = %d",a*b);break;
        case '/': 
            if (b!=0)
                printf("Result = %d",a/b);
            else
                printf("Error! Division by zero.");
            break;
        default: printf("Invalid operator!");
    }
    return 0;
}