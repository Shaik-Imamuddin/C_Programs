#include<stdio.h>

int main(){
    int twd,pd;
    float atper;

    scanf("%d",&twd);
    scanf("%d",&pd);

    atper = (pd*100.0)/twd;

    printf("Attendance Percentage: %.2f%%\n", atper);

    if(atper<75)
        printf("Not Eligible for Exam\n");
    else
        printf("Eligible for Exam\n");
    return 0;
}
