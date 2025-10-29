#include<stdio.h>
int main(){
    int dl, used;
    scanf("%d",&dl);
    scanf("%d",&used);

    int p = (used*100)/dl;

    if (p>=100)
        printf("Data Over!\n");
    else if (p>=50)
        printf("Half Consumed (Used: %d%%)\n",p);
    else
        printf("Low Data Usage (Used: %d%%)\n",p);
    return 0;
}