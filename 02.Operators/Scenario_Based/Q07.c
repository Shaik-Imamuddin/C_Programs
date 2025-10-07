#include <stdio.h>
int main() {
    int candies,kids;
    scanf("%d",&candies);
    scanf("%d",&kids);
    printf("Each kid gets %d candies\n",candies/kids);
    printf("Leftover candies: %d\n",candies%kids);
    return 0;
}