#include<stdio.h>
int main(){
    int batry;
    scanf("%d",&batry);

    if(batry>0 && batry<=100){
        if (batry<20)
            printf("Low Battery\n");
        else if (batry<50)
            printf("50%% Consumed\n");
        else if (batry==100)
            printf("Battery Full\n");
        else
            printf("Battery Status Normal\n");
    }
    return 0;
}