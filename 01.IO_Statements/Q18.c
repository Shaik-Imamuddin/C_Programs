#include <stdio.h>
int main() {
    int dd, mm, yyyy;
    scanf("%d %d %d", &dd, &mm, &yyyy);
    printf("%02d/%02d/%04d\n", dd, mm, yyyy);
    return 0;
}