#include<stdio.h>
int main(){
    float temp;
    scanf("%f",&temp);

    if (temp>=100)
        printf("Fever Detected!\n");
    else
        printf("Normal Temperature.\n");
    return 0;
}