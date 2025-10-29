#include<stdio.h>
int main(){
    int enpin,pin=1234;
    scanf("%d",&enpin);

    if(enpin==pin){
        printf("Access Granted!\n");
    } 
    else{
        printf("Invalid PIN! Access Denied.\n");
    }
    return 0;
}