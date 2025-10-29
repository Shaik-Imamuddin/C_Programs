#include<stdio.h>
int main(){
    int choice;
    printf("Enter Traffic Light (1-Red, 2-Yellow, 3-Green): ");
    scanf("%d",&choice);

    if(choice==1)
        printf("STOP\n");
    else if(choice==2)
        printf("READY\n");
    else if(choice==3)
        printf("GO\n");
    else
        printf("Invalid Input!\n");
    return 0;
}