#include<stdio.h>
int main(){
    int day;
    scanf("%d",&day);

    if(day==6 || day==7)
        printf("Ticket Price: Rs.150");
    else if(day>=1 && day<=5)
        printf("Ticket Price: Rs.100");
    else
        printf("Invalid day!");
    return 0;
}