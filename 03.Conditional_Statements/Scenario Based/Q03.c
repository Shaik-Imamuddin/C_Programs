#include<stdio.h>
int main(){
    int age;
    scanf("%d",&age);

    if (age>=60)
        printf("Eligible for Senior Citizen Benefits.");
    else
        printf("Not eligible for Senior Citizen Benefits.");
    return 0;
}