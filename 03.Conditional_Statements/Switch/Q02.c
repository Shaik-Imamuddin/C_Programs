#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    switch(m/10){ 
        case 10:case 9: 
            printf("Grade: A\n");
            break;
        case 8:
            printf("Grade: B\n");
            break;
        case 7:
            printf("Grade: C\n");
            break;
        default:
            printf("Grade: Fail\n");
    }
    return 0;
}